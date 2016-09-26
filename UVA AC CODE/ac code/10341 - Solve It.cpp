#include<bits/stdc++.h>
using namespace std;
int p,q,r,s,t,u; double mid,start,end,res;
double func(double x)
{
   double ans=p*(exp(-x)) + q*sin(x) + r*cos(x) + s*tan(x) + t*(pow(x,2)) + u;
    return ans;
}
int main()
{
    double EPS=1e-7;
    while(cin>>p>>q>>r>>s>>t>>u)
    {

        start=0; end=1;
        //mid=0.5;

        while(start+EPS<=end)
        {

            mid=(start+end)/2;
            if(func(start)*func(mid)<=0)
            {
                end=mid;
            }
            else start=mid;
        }
        if(func(0)*func(1)>0)
            cout<<"No solution"<<endl;

        else printf("%.4lf\n",mid);

    }
    return 0;
}
