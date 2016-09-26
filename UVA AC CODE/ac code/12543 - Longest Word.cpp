#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 1000000

using namespace std;

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int main()
{
    string s,n,p;
    int len,i,maxi,c;
    map<int,string>mp;
    vector<int>v;
    v.clear();
    mp.clear();
    maxi=0;
    p=s=n="";
    while(cin>>p)
    {
        if(p=="E-N-D") break;

        len=p.size();
        if(mp[len]=="")
            mp[len]=p;
        v.push_back(len);
    }
    for(i=0; i<v.size(); i++)
    {
        maxi=max(v[i],maxi);
    }
    s=mp[maxi];
    for(i=0; i<s.size(); i++)
    {
        if(isalpha(s[i]) || s[i]=='-')
            n+=tolower(s[i]);
    }
    cout<<n<<endl;
    return 0;
}

