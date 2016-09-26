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

    int x,y,n,m,k;
    while(cin>>k)
    {
        if(k==0) break;
        cin>>x>>y;
        for(int i=1;i<=k;i++)
        {
            cin>>n>>m;
            if(n>x && m>y) cout<<"NE"<<endl;
            else if(n<x && m>y) cout<<"NO"<<endl;
            else if(n<x && m<y) cout<<"SO"<<endl;
            else if(n>x && m<y) cout<<"SE"<<endl;
            else cout<<"divisa"<<endl;
        }
    }
    return 0;
}

