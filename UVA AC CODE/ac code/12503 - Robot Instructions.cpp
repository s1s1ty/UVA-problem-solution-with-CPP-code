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
    int T,n,p,a[110],ans;
    string s,x;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d",&n);
        getchar();
        ans=0;
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            stringstream ss;
            stringstream in;
            if(s=="LEFT")
            {
                a[i]=-1;
                ans+=a[i];
            }
            else if(s=="RIGHT")
            {
                a[i]=1;
                ans+=a[i];
            }
            else
            {
                ss<<s;
                while(ss>>x) {}
                in<<x;
                in>>p;
                a[i]=a[p-1];
                ans+=a[i];

            }
        }
        printf("%d\n",ans);

    }
    return 0;
}


