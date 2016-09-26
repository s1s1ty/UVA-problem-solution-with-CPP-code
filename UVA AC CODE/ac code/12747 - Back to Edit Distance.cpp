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

    int n,temp,lb,T,cs=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
        vector<int>b;
        vector<int>a(n+1);
        vector<int>c(n+1,n);

        int low;

        for(int i=0; i<n; i++)
        {

            cin>>temp;
            a[temp]=i;
        }
        for(int i=0; i<n; i++)
        {

            cin>>lb;
            b.push_back(a[lb]);
        }
        c[0]=-n;
        int x=0;
        for(int i=0; i<n; i++)
        {
            low=lower_bound(c.begin(),c.end(),b[i])-c.begin();
            c[low]=b[i];
            x=max(low,x);

        }
        printf("Case %d: %d\n",++cs,(n-x)*2);
    }

    return 0;
}

