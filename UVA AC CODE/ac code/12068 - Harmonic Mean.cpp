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

unsigned long long lc(unsigned long long a,unsigned long long b)
{
    return a*b/__gcd(a,b);
}
int main()
{
    unsigned long long n,num,t=0,cs,lcm,sum,res,div,lob,hor;
    vector<unsigned long long>v;
    cin>>cs;
    while(cs--)
    {
        v.clear();
        lcm=1;
        sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            v.push_back(num);
            lcm=lc(num,lcm);
        }

        for(int i=0;i<v.size();i++)
        {
            sum+=lcm/v[i];
        }
        div=__gcd(sum,lcm);
        hor=sum/div;
        lob=(lcm/div)*n;
        res=__gcd(hor,lob);
        cout<<"Case "<<++t<<": "<<lob/res<<"/"<<hor/res<<endl;
    }
    return 0;
}

