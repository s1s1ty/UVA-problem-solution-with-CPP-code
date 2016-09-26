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
char a[50][50];
int visit[50][50];
int bfs(int i,int j,int r)
{
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    visit[i][j]=1;
    while(!q.empty())
    {
        pair<int,int>f;
        f=q.front();
        int f1=f.fr;
        int f2=f.sc;
        q.pop();
        for(int k=0;k<8;k++)
        {
            int xx=f1+x[k];
            int yy=f2+y[k];

            if(xx>=0 && xx<r && yy>=0 && yy<r && a[xx][yy]=='1' && visit[xx][yy]==0)
            {
                visit[xx][yy]=1;
                q.push(make_pair(xx,yy));
            }
        }
    }


}

int main()
{
    int r,c,i,j,star,t=0;
    while(cin>>r)
    {
        memset(visit,0,sizeof visit);
        memset(a,0,sizeof a);
        star=0;
        //if(r==0 && c==0) break;
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
                cin>>a[i][j];
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(a[i][j]=='1' && visit[i][j]==0)
                {

                    bfs(i,j,r);
                    star++;
                }
            }
        }
        cout<<"Image number "<<++t<<" contains "<<star<<" war eagles."<<endl;
    }
    return 0;
}
