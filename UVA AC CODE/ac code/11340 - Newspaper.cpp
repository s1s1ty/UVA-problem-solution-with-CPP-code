#include<bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[])
{

    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        string s; char c;
        int n1,p;
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>c>>n1;
            mp[c]=n1;
        }
        cin>>p;
        getchar();
        double sum = 0.0;
        for(int i=1; i<=p; i++)
        {
            getline(cin,s);
            for(int j=0; j<s.size(); j++)
            {
                if(mp[s[j]])
                    sum+=mp[s[j]];
            }
        }
        printf("%.2lf$\n",sum/100.0);
    }
    return 0;
}
