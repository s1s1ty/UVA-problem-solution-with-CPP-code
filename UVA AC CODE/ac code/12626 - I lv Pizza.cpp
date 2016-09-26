#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int mini(int a,int b)
{
    if(a<b) return a;
    else return b;

}
int main()
{
    char a[650]; int i,m,r,s,t,g,j,t_c,x,min=0;
    cin>>t_c;
    for(j=1;j<=t_c;j++)
    {
        m=r=s=t=g=i=0;
        cin>>a;
        for(x=0;x<strlen(a);x++)
        {
            if(a[x]=='M') m++;
            if(a[x]=='A') s++;
            if(a[x]=='R') r++;
            if(a[x]=='T') t++;
            if(a[x]=='G') g++;
            if(a[x]=='I') i++;

        }
        //cout<<m<<" "<<s<<" "<<r<<" "<<t<<" "<<g<<" "<<i<<endl;
        int _a=s/3;
        int _r=r/2;
        int mVa = mini(m,_a);
        int rVt = mini(_r,t);
        int gVi = mini(g,i);
        int mvaVrvt = mini(mVa,rVt);
        int ans = mini(mvaVrvt,gVi);
        if(m<1 || s<3 || r<2 || t<1 || g<1 || i<1)  cout<<"0"<<endl;
        else
          cout<<ans<<endl;
    }

    return 0;
}
