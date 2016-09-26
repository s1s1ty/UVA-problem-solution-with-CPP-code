///sure///
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<long long,string>mp;
    string s;
    long long dd,mm,yy,date,mini,maxi;
    int t;
    while(cin>>t)
    {
        mp.clear();
        mini=1000000000;
        maxi=0;
        for(int i=0; i<t; i++)
        {
            cin>>s;
            cin>>dd>>mm>>yy;
            date=yy*10000+mm*100+dd;
            mini=min(date,mini);
            maxi=max(date,maxi);
            mp[date]=s;

        }

        cout<<mp[maxi]<<endl<<mp[mini]<<endl;
    }
    return 0;
}
