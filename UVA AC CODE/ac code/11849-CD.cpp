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
    long long n,m,i,j,count,num,num1;
    map<long long,long long>mp;
    while(cin>>n>>m)
    {
        mp.clear();
        num1=0;
        if(n==0 && m==0) break;
        for(i=0;i<n;i++) {
            cin>>num;
            mp[num]=1;

        }
        for(i=0;i<m;i++) {
            cin>>num;
            if(mp[num]==1) num1++;
        }
        cout<<num1<<endl;

    }
    return 0;
}

