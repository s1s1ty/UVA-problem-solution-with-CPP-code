#include<bits/stdc++.h>

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

using namespace std;

priority_queue<int,vector<int>,less<int> >mypq;
int a[1000000];
int main()
{
    int n,r,i,flag,num,c;

    while(cin>>n>>r)
    {
        c=0;
        memset(a,0,sizeof a);
        for(i=1; i<=r; i++)
        {
            cin>>num;
            a[num]=1;
        }

        if(n==r) cout<<"*"<<endl;
        else
        {
           for(i=1;i<=n;i++)
           {
               if(a[i]!=1)
               {
                   cout<<i<<" ";
               }


           }
           cout<<endl;
        }
    }
    return 0;
}


