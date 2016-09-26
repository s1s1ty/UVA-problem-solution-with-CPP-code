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

char G[127][127];
int visit[127][127];
vector<char>v;

struct data
{
    int x;
    char y;
} v2[127];

bool cmp(const data &a, const data &b)
{
    if(a.x > b.x) return true;
    else if(a.x == b.x)
    {
        if(a.y < b.y) return true;
    }
    return false;
}

int bfs(int i,int j,int row,int col,char s)
{

    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    visit[i][j]=1;
    int c=0;
    while(!q.empty())
    {
        pair<int,int>f;
        f=q.front();
        int f1=f.fst;
        int f2=f.snd;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int xx=f1+x[i];
            int yy=f2+y[i];

            if(xx>=0 && xx<row && yy>=0 && yy<col && G[xx][yy]==s && visit[xx][yy]==0)
            {
                visit[xx][yy]=1;
                q.push(make_pair(xx,yy));
            }
        }
    }
    c++;
    return c;
}

int main()
{
    int T,r,c,cs=0,x;
    char s;
    scanf("%d",&T);
    for(int cs=1; cs<=T; cs++)
    {
        memset(v2,0,sizeof v2);
        memset(G,0,sizeof G);
        set<char>st;
        vector<int>store[125];
        set<char> ::iterator it;
        v.clear();
        scanf("%d%d",&r,&c);
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>G[i][j];
                st.insert(G[i][j]);
            }
        }

        for(it=st.begin(); it!=st.end(); it++)
            v.push_back(*it);

        int k=0,cc=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                for(int k=0; k<v.size(); k++)
                {
                    if(G[i][j]==v[k] && visit[i][j]==0)
                    {
                        x=v[k];
                        int b=bfs(i,j,r,c,v[k]);
                        store[x].push_back(b);
                    }
                }
            }
        }

        for(int i=97; i<=122; i++)
        {
            v2[i].y=i;
            for(int a=0; a<store[i].size(); a++)
            {
                v2[i].x+=store[i][a];
            }


        }
        sort(v2+97,v2+123,cmp);
        printf("World #%d\n",cs);
        for(int i=97; i<=122; i++)
        {
            if(v2[i].x!=0)
                printf("%c: %d\n",v2[i].y,v2[i].x);
        }

    }
    return 0;
}



