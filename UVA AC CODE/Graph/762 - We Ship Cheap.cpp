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
#include <cstdio>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define inf (1<<29)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

map<string,vector<string> >mp;
map<string,string>root;
map<string,int>visit;

void bfs(string s,string d)
{
    queue<string>q;
    q.push(d);
    visit[d]=1;
    while(!q.empty())
    {
        string f=q.front();
        q.pop();
        for(int i=0; i<mp[f].size(); i++)
        {
            string temp=mp[f][i];

            if(!visit[temp])
            {
                root[temp]=f;
                if(temp==s) return;

                visit[temp]=1;
                q.push(temp);
            }
        }
    }
    return;

}
int main()
{
    int n,p=0;
    string u,v,s,d,u1,v1;
    while(~scanf("%d",&n))
    {
        mp.clear();
        visit.clear();
        root.clear();
        if(p>0) puts("");

        for(int i=0; i<n; i++)
        {
            cin>>u1>>v1;
            mp[u1].push_back(v1);
            mp[v1].push_back(u1);

        }
        cin>>s>>d;
        bfs(s,d);

        if(root[s]=="") {cout<<"No route"<<endl; continue;}
            while(s!=d)
            {
                cout<<s<<" ";
                s=root[s];
                cout<<s<<endl;
            }

        p=1;

    }
    return 0;
}



