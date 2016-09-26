#include<bits/stdc++.h>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 100

using namespace std;

int diraction1[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int diraction2[] = {0, -1, 1, 0, 1, -1, 1, -1};

int cost[100];
int wt[100],cap,n,w=0;
int dp[100][100];

int main()
{
    int r,c,m,n,i,j,x=0,t,maxi,sum,ans;
    int a[101];
    char s[50][50];
    string p;
    cin>>t;
    while(t--)
    {
        p="";
        memset(a,0,sizeof a);
        maxi=sum=0;
        cin>>r>>c>>m>>n;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>s[i][j];
                p+=s[i][j];
            }
        }

        for(i=0; i<p.size(); i++)
        {
            a[p[i]]++;
        }
        int ct=0;
        for(i='A'; i<='Z'; i++)
        {
            if(a[i] > maxi)
            {
                maxi = a[i];
                ct = 1;

            }
            else if(a[i] == maxi)
            {
                ++ct;
            }
        }

        sum=(r*c)-(maxi*ct);
        ans=maxi*m*ct+sum*n;
        printf("Case %d: %d\n",++x,ans);
    }

    return 0;
}

