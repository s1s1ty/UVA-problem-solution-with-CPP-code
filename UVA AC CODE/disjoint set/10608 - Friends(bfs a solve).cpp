#include<bits/stdc++.h>
using namespace std;
vector<int>G[300005];
int visit[300005];
vector<int>member(300005);
vector<int>x;
int bfs(int s)
{
    queue<int>q;
    q.push(s);
    visit[s]=1;
    member[s]=1;
    int i;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(i=0;i<G[f].size();i++)
        {
            int v=G[f][i];
            if(!visit[v])
            {
                visit[v]=1;
                member[s]++;
                q.push(v);
            }
        }
    }
}

int main()
{
    int a,b,t,c,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&c,&m);
        memset(G,0,sizeof G);
        memset(visit,0,sizeof visit);
        vector<int>t;
        while(m--)
        {
            cin>>a>>b;
                G[a].push_back(b);
                G[b].push_back(a);
            t.push_back(a);
            t.push_back(b);
        }
        int maxi=0;
        for(int i=0;i<t.size();i++)
        {
            if(visit[t[i]]==0){
              bfs(t[i]);
              maxi=max(maxi,member[t[i]]);
            }
        }

        cout<<maxi<<endl;
        memset(visit,0,sizeof visit);
        member.clear();
        x.clear();

    }

    return 0;
}

