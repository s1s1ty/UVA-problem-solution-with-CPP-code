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

long long gcd(long long a, long long b) {
    if(b == 0)
      return a;
    else
      return gcd(b, a % b);
}
long long lc(long long a,long long b)
{
    return a*b/__gcd(a,b);
}
int main()
{

    long long t,m,n,k,i,s=0,num,lcm,num1,sum,lob,hor,res,cs=0,g;
    vector<long long>v,v1;
    cin>>t;
    while(t--)
    {
        v.clear();
        v1.clear();
        cin>>m;
        lcm=1;
        sum=0;
        for(i=1; i<=m; i++)
        {
            cin>>n>>k;

            v.push_back(n);
            v1.push_back(k);

            lcm=lc(n,lcm);
        }
        for(i=0; i<v.size(); i++)
        {
            g=lcm/v[i];
            sum+=g*v1[i];
        }
        //cout<<g<<" "<<sum<<endl;
        res=gcd(sum,lcm);
        lob=sum/res;
        hor=lcm/res;
        long long ans=gcd(lob,hor);
        cout<<"Case "<<++cs<<": "<<lob/ans<<"/"<<hor/ans<<endl;
    }
    return 0;
}

