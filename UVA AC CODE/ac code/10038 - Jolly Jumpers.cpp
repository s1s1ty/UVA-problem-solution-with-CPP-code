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
    int n,num,a[3005],sub,f,k;
    vector<int>v1;
    vector<int>v2;
    while(cin>>n)
    {
        v1.clear();
        v2.clear();
        f=1;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            v1.push_back(num);
        }
        for(int i=0; i<n-1; i++)
        {
            sub=abs(v1[i+1]-v1[i]);
            v2.push_back(sub);
        }
        sort(v2.begin(),v2.end());
        for(int i=1; i<n; i++)
        {
            //cout<<v2[i-1]<<" "<<i<<endl;
            if(v2[i]==v2[i-1])
            {
                f=0; break;

            }

        }
        if(f!=0) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }

    return 0;
}


