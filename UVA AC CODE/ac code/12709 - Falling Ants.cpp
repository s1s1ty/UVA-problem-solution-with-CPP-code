#include<iostream>
using namespace std;
int main()
{
    int l[105],w[105],h[105],t=0,t_c,i,max,p=0,x[1000],y,z,ans;
    while(cin>>t_c && t_c!=0){

        max=y=0;

        for(i=0;i<t_c;i++){

         cin>>l[i]>>w[i]>>h[i];

         if(h[i]>max)
         {
             max=h[i];
             z=max*l[i]*w[i];
             ans=z;
         }

        }
        for(i=0;i<t_c;i++)
        {
            if(max==h[i])
            {
                x[i]=l[i]*w[i]*h[i];
               if(y<x[i]) y=x[i];
               ans=y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
