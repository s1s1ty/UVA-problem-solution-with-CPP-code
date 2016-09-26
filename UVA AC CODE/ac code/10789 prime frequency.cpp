#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define SIZE 4000
int prime[SIZE];
int count[100000];
int sv()
{
    int i,j;
    prime[0]=prime[1]=1;
    prime[2]=0;
    for(i=4;i<=SIZE;i+=2) prime[i]=1;
    for(i=3;i*i<=SIZE;i+=2)
    {
        if(prime[i]==0)
         for(j=i*i;j<=SIZE;j+=i)
           prime[j]=1;
    }
}
int main()
{
    sv();
    int _case,num,t=0,j,flag,c,c1; char a[2005];
    scanf("%d",&_case); scanf(" ");
    while(_case--)
    {
        gets(a);

        printf("Case %d: ",++t);

        memset( count , 0 , sizeof count);

        for(int i=0;i<strlen(a);i++)
        {
            count[ a[i] ]++;
        }
        c=c1=0;
        for(j=48;j<=122;j++)
        {
            if(count[j]!=0)
            {
                c1++;
             if(prime[count[j]]==0)
                printf("%c",j);
             else
             {
                c++;
             }
            }
        }
        //cout<<c<<" "<<c1<<endl;
        if(c==c1) printf("empty");
        puts("");
    }
    return 0;
}
