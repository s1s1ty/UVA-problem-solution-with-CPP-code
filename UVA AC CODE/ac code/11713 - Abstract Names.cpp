#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 100

using namespace std;

int diraction1[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int diraction2[] = {0, -1, 1, 0, 1, -1, 1, -1};

int main()
{
    string s,p;
    int t,len,i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>p;
        for(i=0;i<=s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='0') s[i]='a';
        }
        for(i=0;i<=p.size();i++)
        {
            if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' || p[i]=='0') p[i]='a';
        }
        //cout<<s<<" "<<p<<endl;
        if(s.size()==p.size())
        {
            if(s==p) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}

