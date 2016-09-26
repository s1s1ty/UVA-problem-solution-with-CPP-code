///ac
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<cstdlib>
#include<cstdio>
#include<cstring>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 100

using namespace std;

int cost[N];
int a[N][N];
map<long,long> mp;
long  visit[N],s,f,maxi,n;

int Bfs(long s)
{
    queue <long> q;
    visit[ s ]=1;
    cost[ s ]=0;
    q.push( s );
    while(!q.empty())
    {
        f = q.front();
        q.pop();
        for(int i=1; i<=maxi; i++)
        {

            if(a[i][f]==1 && visit[ i ]==0)
            {
                visit[ i ]=1;
                cost[ i ]=cost[ f ]+1;
                q.push( i );
            }
        }
    }
}

int main()
{
    long  c1,c2,i,e,C=0,count,m;
    while(cin>>n)
    {
        m=maxi=0;
        if(n==0) break;
        memset(a, 0 ,sizeof a);
        for(i=0; i<n; i++)
        {
            cin>>c1>>c2;
            if(!mp[c1])
            {
                m++;
                mp[c1]=m;
            }
            if(!mp[c2])
            {
                m++;
                mp[c2]=m;
            }
            c1=mp[c1];
            c2=mp[c2];
            a[c1][c2]=1;
            a[c2][c1]=1;
            maxi=max(maxi,c1);
            maxi=max(maxi,c2);

        }
        while(cin>>s>>e)
        {

            if(s==0 && e==0) break;


            else
            {

                memset(cost,-1,sizeof cost);
                memset(visit,0,sizeof visit);

                if(!mp[s])
                {
                    m++;
                    mp[s]=m;
                }

                maxi=m;
                Bfs(mp[s]);
                count=0;

                for(int j=1; j<=maxi; j++)
                {
                    //cout<<cost[j]<<" ";
                    if(cost[j]>e || cost[j]==-1) count++;
                }
                cout<<"Case "<<++C<<": "<<count<<" nodes not reachable from node "<<s<<" with TTL = "<<e<<"."<<endl;
            }


        }
        mp.clear();

    }
    return 0;
}
