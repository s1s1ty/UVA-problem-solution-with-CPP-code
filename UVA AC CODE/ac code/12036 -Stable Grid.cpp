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

int main()
{
    int n,cs,T=0,num,flag;
    map<int,int>mp;
    cin>>cs;
    while(cs--)
    {
        mp.clear();
        flag=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>num;
                mp[num]++;
            }
        }
        for(int i=0; i<mp.size(); i++)
        {
            if(mp[i]>n)
            {
                flag=1;
                break;
            }
        }
        if(flag) printf("Case %d: no\n",++T);
        else printf("Case %d: yes\n",++T);
    }
    return 0;
}


