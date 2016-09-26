#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i,t_c,n,p,q,count,a[100],x;
    cin>>t_c;
    for(t=1;t<=t_c;t++)
    {
        x=count=0;
        cin>>n>>p>>q;
        for(i=0;i<n;i++){
         cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=q && count!=p){
              count++;
              q=q-a[i];
            }
        }
       printf("Case %d: %d\n",t,count);
    }
    return 0;
}
