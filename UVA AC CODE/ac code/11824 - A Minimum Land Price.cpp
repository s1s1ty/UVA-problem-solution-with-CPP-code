#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,num,i,ans,p;
    vector<long long>v;
    cin>>t;
    while(t--)
    {

        v.clear();
        while(1)
        {
            cin>>num;
            if(num==0) break;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        ans=p=0;
        for(i=v.size()-1;i>=0;i--)
        {
            ans+=2*pow(v[i],++p);
        }
        if(ans>5000000) cout<<"Too expensive"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
