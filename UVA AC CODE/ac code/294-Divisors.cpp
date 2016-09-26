#include<bits/stdc++.h>
using namespace std;
#define N 10000000
int count_divisor(long long int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n) count+=1;
        else if(n%i==0) count+=2;
    }
    return count;
}
int main()
{
    long long l,u,t=0,t_c,max,ans,count,range,i;
    scanf("%lld",&t_c);
    while(t_c--)
    {
        max=0;
        scanf("%lld %lld",&l,&u);
        for(i=l;i<=u;i++)
        {
            ans=count_divisor(i);
            if(ans>max)
            {
                max=ans;
                range=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,range,max);

    }
    return 0;
}
