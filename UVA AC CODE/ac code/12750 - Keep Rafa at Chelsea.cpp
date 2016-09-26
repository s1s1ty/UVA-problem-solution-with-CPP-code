#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,k,n,j,ans;
    char c;

    cin>>T;
    for(int i=1; i<=T; i++)
    {
        vector<char>v;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        k=ans=0;
        for(j=0; j<v.size(); j++)
        {

            if(v[j]=='W') k=0;
            else k++;
           // cout<<v[j]<<" "<<k<<endl;
            if(k==3)
            {
                ans=j;
                break;
            }
        }
        if(j==v.size() || k==0) printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        else printf("Case %d: %d\n",i,ans+1);
    }
    return 0;
}
