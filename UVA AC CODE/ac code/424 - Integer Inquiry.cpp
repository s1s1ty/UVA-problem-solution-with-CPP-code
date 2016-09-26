#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string ans="";
void add(string a)
{
    int carry =0,tem,i,j,k; string b=ans; ans="";
    for(i=a.size()-1,j=b.size()-1;i>=0 || j>=0;i--,j--)
    {
        if(i<0) tem=carry+b[j]-'0';
        else if(j<0) tem=carry+a[i]-'0';
        else tem=carry+(a[i]-'0')+(b[j]-'0');
        carry=tem/10;
        ans+=(tem%10)+'0';
    }
    if(carry==1) ans+='1';
    reverse(ans.begin(),ans.end());
    }
int main()
{
    string a,b,c;
    while(cin>>a)
    {
        if(a=="0")
        break;
        add(a);
    }
    cout<<ans<<endl;
    return 0;
}
