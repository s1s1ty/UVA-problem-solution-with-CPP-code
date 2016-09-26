#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 1000000

using namespace std;

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

char am[105][105];
int visit[105][105];

int BFS(int i,int j,int row,int col)
{
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    visit[i][j]=1;

    while(!q.empty())
    {
        pair<int,int> f;
        f=q.front();
        int f1=f.fr;
        int f2=f.sc;
        q.pop();

        for(int k=0; k<8; k++)
        {
            int xx=f1+x[k];
            int yy=f2+y[k];

            if(xx>=0 && xx<row && yy>=0 && yy<col && am[xx][yy]=='@' && visit[xx][yy]==0)
            {
                q.push(make_pair(xx,yy));
                visit[xx][yy]=1;
            }
        }
    }
}

int main()
{
    int m,n,i,j,c;
    while(cin>>m>>n)
    {
        if(m==0 && n==0) break;
        memset(visit,0,sizeof visit);
        memset(am,0,sizeof am);
        c=0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>am[i][j];
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {

                if(am[i][j]=='@' && visit[i][j]==0)
                {
                    BFS(i,j,m,n);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
