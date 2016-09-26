#include<bits/stdc++.h>
using namespace std;

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

int cost[101][101];
int visit[101][101];

int bfs(int i,int j,int lr,int lc)
{
    queue<pair<int,int> >q;
    q.push(make_pair(i,j));
    visit[i][j]=1;
    cost[i][j]=0;
    while(!q.empty())
    {
        pair<int,int>f;
        f=q.front();
        int f1=f.first;
        int f2=f.second;
        q.pop();
        for(int r=0;r<8;r++)
        {
            int xx=f1+dx[r];
            int yy=f2+dy[r];
            if(xx>0 && xx<=8 && yy>0 && yy<=8 && visit[xx][yy]==0)
            {
                visit[xx][yy]=1;
                q.push(make_pair(xx,yy));
                cost[xx][yy]=cost[f1][f2]+1;
            }
        }
    }
    return cost[lr][lc];
}

int main()
{
	int row1,row2;
	char col1,col2;
	while(cin>>col1>>row1>>col2>>row2)
	{
	    memset(visit,0,sizeof visit);
	    memset(cost,63,sizeof cost);
		int c1,c2;
		c1=col1-('a'-1);
		c2=col2-('a'-1);

		int b=bfs(row1,c1,row2,c2);
		printf("To get from %c%d to %c%d takes %d knight moves.\n",col1,row1,col2,row2,b);

	}
	return 0;
}
