#include<bits/stdc++.h>
using namespace std;
#define N 20005
vector<int>g[N];
int d[N];
vector<int>cost[N];

void setv()
{
   for(int i=0;i<N;i+=1)
   {
      d[i] = INT_MAX;
   }
}
struct node{
  bool operator()(const int &lhs,const int &rhs)const
  {
     return cost[lhs]>cost[rhs];
  }
};
int dijkstra(int from,int to)
{
    setv();
    priority_queue<int,vector<int>,node>q;
    q.push(from);
    d[from]=0;
    while(!q.empty())
    {
        int f = q.top();
        q.pop();
        for(int i=0; i<g[f].size(); i++)
        {
            int v = g[f][i];
            if(d[f]+cost[f][i]<d[v])
            {
                d[v] = d[f]+cost[f][i];
                q.push(v);
            }
        }
    }
    return d[to];
}
int main()
{
    freopen("spj.txt","r",stdin);
    int n,m,t,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        int from,to,w;
        scanf("%d %d %d %d",&n,&m,&from,&to);
        int u,v;
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);

        }
        printf("Case #%d: ",++cs);
        int b = dijkstra(from,to);
        if(b!=INT_MAX) printf("%d\n",b);
        else puts("unreachable");

        for(int i=0; i<N; i++)
        {
           g[i].clear();
           cost[i].clear();
        }
    }
    return 0;
}
