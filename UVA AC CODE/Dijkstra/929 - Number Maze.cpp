#include<bits/stdc++.h>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define inf (1<<29)
#define akbarbe ceil
#define akkombe floor
#define bug(x) cout<<#x<<" = "<<x<<endl
#define N 1001
#define LL long long
#define delect(str) str.erase(std::remove_if(str.begin(), str.end(), str[i]), str.end());

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

LL cost[N][N];
LL d[N][N];
LL v[N][N];
LL n,m;

struct node
{
    LL r,c,w;
    bool operator < (const node& p) const
    {
        if( w < p.w) return false;
        return true;
    }
};


void setv()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            d[i][j] = INT_MAX;
            v[i][j]=0;
        }
    }
}
LL dijkhstra(LL n,LL m)
{
    priority_queue<node>pq;
    node ob;
    ob.r = 1;
    ob.c = 1;
    ob.w = 0;
    pq.push(ob);
    d[1][1]=cost[1][1];
    while(!pq.empty())
    {
        ob = pq.top();
        LL ro = ob.r;
        LL co = ob.c; v[ro][co]=1;
        pq.pop();
        for(LL i=0; i<4; i++)
        {
            LL rr = x[i]+ro;
            LL cc = y[i]+co;

            if(rr>=1 && rr<=n && cc>=1 && cc<=m && v[rr][cc]==0)
            {
                if(d[ro][co]+cost[rr][cc]<d[rr][cc])
                {
                    d[rr][cc] = d[ro][co]+cost[rr][cc];
                    ob.r = rr;
                    ob.c = cc;
                    ob.w = d[rr][cc];
                    pq.push(ob);

                }
            }

        }

    }
    return d[n][m];

}

int main()
{
    freopen("in.txt","r",stdin);
    LL t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        setv();
        LL w;
        for(LL i=1; i<=n; i++)
        {
            for(LL j=1; j<=m; j++)
            {
                scanf("%lld",&w);
                cost[i][j]=w;
            }
        }
        LL dd = dijkhstra(n,m);
        printf("%lld\n",dd);

    }
    return 0;
}
