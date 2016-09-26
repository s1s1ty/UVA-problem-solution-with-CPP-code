#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    string a,b,c,r_b; int t,t_c,len,r,g;
    cin>>t_c; scanf(" ");
    for(t=1;t<=t_c;t++){
       cin>>a>>b;
       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       string ans;
            int carry =0,tem,i,j,k;
            for(i=a.size()-1,j=b.size()-1;i>=0 || j>=0;i--,j--)
            {
                if(i<0) tem=carry+b[j]-'0';
                else if(j<0) tem=carry+a[i]-'0';
                 else tem=carry+(a[i]-'0')+(b[j]-'0');
                carry=tem/10;
                ans+=(tem%10)+'0';
            }
            if(carry==1) ans+='1';
            r=0;
                      while(ans[r]=='0')
                      {
                          r++;
                      }
                      //cout<<r<<endl;
                  for(g=0+r;g<ans.size();g++)
                  {

                      cout<<ans[g];
                  }
          cout<<endl;
    }
    return 0;
}
