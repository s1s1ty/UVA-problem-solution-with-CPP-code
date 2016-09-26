#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 100000
using namespace std;

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

using namespace std;
char a[105][105];
int visit[105][105];
int bfs(int i,int j,int r,int c)
{
    queue<pair<int,int> >q;
    int cnt=0;
    q.push(make_pair(i,j));
    visit[i][j]=1;
    while(!q.empty())
    {
        pair<int,int>f;
        f=q.front();
        int f1=f.fr;
        int f2=f.sc;
        q.pop();
        for(int k=0; k<8; k++)
        {
            int xx=f1+x[k];
            int yy=f2+y[k];
            if(xx>=0 && xx<r && yy>=0 && yy<c && a[xx][yy]=='*' && visit[xx][yy]==0)
            {
                cnt++;
                visit[xx][yy]=1;
                q.push(make_pair(xx,yy));

            }
        }
    }
    return cnt;
}

int main()
{
    int r,c,i,j,star,k,flag;
    while(cin>>r>>c)
    {
        flag=0;
        memset(visit,0,sizeof visit);
        memset(a,0,sizeof a);
        star=0;
        if(r==0 && c==0) break;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                cin>>a[i][j];
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {

                if(a[i][j]=='*' && visit[i][j]==0)
                {
                    flag=bfs(i,j,r,c);
                    if(flag==0)
                        star++;
                }
            }
        }
        cout<<star<<endl;
    }
    return 0;
}
