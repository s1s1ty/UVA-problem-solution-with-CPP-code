#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define N 100000
int prime[N];
int a;
int sv()
{
    int i,j;
    prime[1]=prime[2]=0;
    for(i=4;i<=N;i+=2) prime[i]=1;
    for(i=3;i*i<=N;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=N;j+=i)
              prime[j]=1;
        }
    }

}
int main()
{
    sv();
    int i; char input[50];
    while(gets(input))
    {
        a=0;
        for(i=0;i<strlen(input);i++)
        {
            if(input[i]>='a' && input[i]<='z')
              a+=(input[i]-'a')+1;
            if(input[i]>='A' && input[i]<='Z')
              a+=(input[i]-'A')+27;
        }
        if(prime[a]==0) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
