#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define inf (1<<29)
#define akbarbe ceil
#define akkombe floor
#define bug(x) cout<<#x<<" = "<<x<<endl
#define N 1000000
#define LL long long

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

/*bool mark[N];
int prime[N];
void seive()
{
    mark[2]=0;
    for(int i=4;i<=N;i+=2) mark[i]=1;
    for(int i=3;i*i<=N;i+=2)
    {
        if(mark[i]==0)
        {
            for(int j=i*i;j<=N;j+=i) mark[j]=1;
        }
    }
    for(int i=2,k=0;i<=N;i++)
    {
        if(mark[i]==0) prime[k++]=i;
    }
}*/
///Geometry///
/*double perimeter(double A,double B,double C)
{
    return A+B+C;
}
double semi_perimeter(double A,double B,double C)
{
    return perimeter(A,B,C)/2.0;
}
double TAREA(double A,double B,double C)
{
    double S=semi_perimeter(A,B,C);
    return sqrt(S*(S-A)*(S-B)*(S-C));
}
/*double incircle(double A,double B,double C)
{
    return TAREA(A,B,C)/semi_perimeter(A,B,C);
}
double excircle(double A,double B,double C)
{
    double AA=TAREA(A,B,C);
    return A*B*C/(4*AA);
}*/
map<string,string>mp;
map<string,int>mam;
void representative(string s)
{
    mp[s]=s;
    mam[s]=1;
}
string findf(string s)
{
    if(mp[s]==s) return s;
    return mp[s]=findf(mp[s]);
}
void setf(string a,string b)
{
    a=findf(a);
    b=findf(b);
    if(a!=b)
    {
        mp[a]=b;
        mam[b]+=mam[a];

    }
}
int main()
{
    int c,r,p;
    while(cin>>c>>r)
    {
        string a,b,s1;
        vector<string>cc;
        if(c==0 && r==0) break;
        for(int i=0; i<c; i++)
        {
            cin>>s1;
            cc.push_back(s1);
            representative(s1);
        }

        for(int i=0; i<r; i++)
        {
            cin>>a>>b;
            setf(a,b);
        }
        int maxi=0;
        for(int i=0; i<c; i++)
        {
            maxi=max(maxi,mam[cc[i]]);
        }
        cout<<maxi<<endl;
        mp.clear();
        mam.clear();
    }
    return 0;
}


