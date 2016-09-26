#include<bits/stdc++.h>

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

using namespace std;

int main()
{
    long n,num1,num,d,r,sub,sum,overtime;
    vector<long>m;
    vector<long>e;
    priority_queue<int,vector<int>,less<int> >mypq;
    while(cin>>n>>d>>r)
    {
        m.clear();
        e.clear();
        if(n==0 && d==0 && r==0) break;
        overtime=0;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            m.push_back(num);

        }
        for(int i=0; i<n; i++)
        {
            cin>>num1;
            e.push_back(num1);
        }
        sort(m.begin(),m.end());
        sort(e.begin(),e.end());
        for(int i=0; i<n; i++)
        {
            sum=m[i]+e[n-i-1];
            if(sum>d)
            {
                sub=sum-d;
                overtime+=sub*r;

            }
        }
        cout<<overtime<<endl;
    }
    return 0;
}


