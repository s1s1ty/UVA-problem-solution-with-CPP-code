/* Shaonty Dutta
   Bangladesh University
*/

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>

using namespace std;

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 1000000

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int main()
{
    long long n,k,t,num,sub,sum,cs=0,c;
    vector<long long>v,v1,v2;
    cin>>t;
    while(t--)
    {
        v.clear();
        v1.clear();
        v2.clear();
        sum=c=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            v.push_back(num);
        }
        for(int i=0;i<n;i++)
        {
            cin>>num;
            v1.push_back(num);
        }
       for(int i=0;i<n;i++)
        {
            sub=v1[i]-v[i];
            if(sub<0) c++;
            v2.push_back(sub);
        }
        sort(v2.begin(),v2.end());
        if(c<=k)
        {
            for(int i=c;i<v2.size();i++) sum+=v2[i];
        }
        else if(c>=k)
        {
            for(int i=k;i<v2.size();i++) sum+=v2[i];
        }
        else
        {
            for(int i=0;i<v2.size();i++) sum+=v2[i];
        }
        //cout<<sum<<endl;
        if(sum>0) cout<<"Case "<<++cs<<": "<<sum<<endl;
        else cout<<"Case "<<++cs<<": No Profit"<<endl;
    }
    return 0;
}

