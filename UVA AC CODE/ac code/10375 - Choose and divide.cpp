#include<iostream>
#include<cstdio>
using namespace std;
int nCr(long long int n,long long int r)
{
    long long i,res=1;
    if(n-r<r) r=n-r;
    for(i=1;i<=r;i++,n--)
    {
        res=(res*n);
        res=(res/i);
    }
    return res;

}
int main()
{
    long long p,q,r,s; double ans;
    while(cin>>p>>q>>r>>s)
    {
        long long  f1 = nCr(p,q);
        long long f2 = nCr(r,s);
        cout<<f1<<" "<<f2<<endl;
        //ans=(double)nCr(p,q)/(double)nCr(r,s);
        //printf("%5lf\n",ans);
    }
    return 0;
}
