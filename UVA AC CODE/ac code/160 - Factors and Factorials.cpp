#include<iostream>
#include<cmath>
#include<cstdio>
#define n 1000
using namespace std;
bool mark[n];
int prime[n];
int sum[n];
int sv()
{
    mark[2]=0;
    for(int i=4;i<=n;i+=2) mark[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(mark[i]==0)
        {
            for(int j=i*i;j<=n;j+=i) mark[j]=1;
        }
    }
    for(int i=2,k=0;i<=n;i++)
    {
        if(mark[i]==0) prime[k++]=i;
    }
}
int factorial_fact(long long int num)
{
    sv();
    int k=0,count; int f=0;
    for(int i=0;prime[i]<=num;i++)
    {
        int tmp=num; count=0;
        while(tmp>0)
        {
            count+=floor(tmp/prime[i]);
            tmp=tmp/prime[i];
        }
        f++;
        if(f==16) printf("\n%6c",' ');
        printf("%3d",count);
    }
}
int main()
{
    long long int num,r;
    while(cin>>num)
    {
        if(num==0) break;
       printf("%3lld! =",num);
       r=factorial_fact(num);
       cout<<endl;
    }
    return 0;
}

