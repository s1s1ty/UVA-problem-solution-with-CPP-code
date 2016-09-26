#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100]; int len,i,t_c,c,count,s[100],k,m,sum;
    scanf("%d",&t_c); getchar();
    for(c=1;c<=t_c;c++)
    {
            scanf("%s",a); count=k=sum=0;
             len=strlen(a);
             for(i=0;i<len;i++)
             {
                  count++;
                if(a[i]=='X') count=0;
                s[i]=count;

             }
             for(m=0;m<len;m++) sum+=s[m];
             printf("%d\n",sum);

    }
    return 0;
}
