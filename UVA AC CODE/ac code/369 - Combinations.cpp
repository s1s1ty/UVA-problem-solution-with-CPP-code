#include<bits/stdc++.h>
using namespace std;
long long int nCr(long long int n,long long int r)
{
    long long i,res=1;
    if(n-r<r)
      r=n-r;
    for(i=1;i<=r;i++,n--)
    {
        res*=n;
        res/=i;
    }
    return res;
}
int main()
{
    long long int n,r;
    while(~scanf("%lld %lld",&n,&r))
    {
        if(n==0 && r==0) break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));

    }
    return 0;
}
