#include<bits/stdc++.h>

using namespace std;

int main()
{
    char w[25]; string ans;
    while(cin>>w)
    {
        ans="";
        for(int i=0;i<strlen(w);i++)
        {
            if(w[i]=='B' || w[i]=='F' || w[i]=='P' || w[i]=='V') ans+="1";
            else if(w[i]=='C' || w[i]=='G' || w[i]=='J' || w[i]=='K' || w[i]=='Q' || w[i]=='S' || w[i]=='X' || w[i]=='Z') ans+="2";
            else if(w[i]=='D' || w[i]=='T') ans+="3";
            else if(w[i]=='L') ans+="4";
            else if(w[i]=='M' || w[i]=='N') ans+="5";
            else if(w[i]=='R') ans+="6";
            else ans+="*";
        }
        for(int j=0;j<ans.size();j++)
        {
            if(ans[j]!=ans[j+1])
            {
                if(ans[j]=='*') cout<<"";
                else cout<<ans[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
