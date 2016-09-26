#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char a,b; string f,s; int t_c,t,i,j,p=0,k,m; string ans;
    cin>>t_c;
    for(t=1;t<=t_c;t++)
    {
        //cout<<endl;
        if(p>0) cout<<"\n";
        cin>>m;
        f=""; s=""; ans="";
        for(k=1;k<=m;k++)
         {
             cin>>a>>b;
            f+=a;
            s+=b;
         }
         int carry=0,tmp;

        for(i=f.size()-1,j=s.size()-1; i>=0 || j>=0;i--,j--)
        {
            if(i<0) tmp=carry+s[j]-'0';
            else if(j<0) tmp=carry+f[i]-'0';
            else
              tmp=carry+(s[i]-'0')+(f[j]-'0');

              carry=tmp/10;
              ans+=(tmp%10)+'0';
        }
        if(carry==1) ans+='1';
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        p=1;
    }
    return 0;
}
