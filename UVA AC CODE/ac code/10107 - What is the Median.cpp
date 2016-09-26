
#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second

using namespace std;

int main()
{
     vector<long long>v;
     long long n,ans,si;
     while(cin>>n)
     {
         v.push_back(n);
         sort(v.begin(),v.end());
         si=v.size();
         long n1=(si/2);
         if(si&1)
         cout<<v[n1]<<endl;
         else cout<<(v[n1-1]+v[n1])/2<<endl;
     }
    return 0;
}
