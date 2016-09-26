#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
int a[30][30],n;
bool visit[30];

using namespace std;

int reset();
int bfs(int num);

int main()
{
    char s[30],s1[30];
    int i,t,j,p=0;
    cin>>t;
    //cout<<endl;
    for(j=1; j<=t; j++)
    {
        //if(p>0) cout<<endl;
        cin>>s;
        n=s[0]-'A';
        getchar();
        reset();
        while(gets(s))
        {
            if(s[0]=='\0') break;
            a[s[0]-'A'][s[1]-'A']=1;
            a[s[1]-'A'][s[0]-'A']=1;
        }
        int count=0;
        for(i=0; i<=n; i++)
        {
            if(visit[i]==0)
            {
                bfs(i);
                count++;
            }
        }
        if(j!=1) cout<<endl;
        cout<<count<<endl;


    }
    return 0;
}
int bfs(int num)
{
    queue< int > q;

    visit[num]=1;
    q.push(num);

    while(!q.empty())
    {
        int f=q.front();
        q.pop();

        for(int i=0; i<=n; i++)
        {
            if(a[f][i]==1 && visit[i]==0)
            {
                visit[i]=1;
                q.push(i);
            }
        }
    }
}
int reset()
{
    for(int i=0; i<30; i++)
    {
        visit[i]=0;
        for(int j=0; j<30; j++)
            a[i][j]=0;
    }
}
