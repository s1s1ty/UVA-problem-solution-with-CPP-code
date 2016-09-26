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

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

class router{
public:
   int rx,ry,r;
};
int main()
{
    int n,T,a,x,y,rx,ry,r;
    cin>>T;
    for(int cs=1; cs<=T; cs++)
    {
        cout<<"Case "<<cs<<":"<<endl;
        vector<router>v;
        router ob;
        cin>>n>>a;
        for(int i=0; i<n; i++)
        {
            cin>>ob.rx>>ob.ry>>ob.r;
            v.push_back(ob);
        }


        for(int i=0; i<a; i++)
        {
            cin>>x>>y;
            bool flag=false;
            for(int j=0; j<n; j++)
            {
                int dis=(v[j].rx-x)*(v[j].rx-x)+(v[j].ry-y)*(v[j].ry-y);
                if(dis<=v[j].r*v[j].r)
                {
                    flag=true; break;
                }
            }
            if(flag) cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
        }

    }
    return 0;
}



