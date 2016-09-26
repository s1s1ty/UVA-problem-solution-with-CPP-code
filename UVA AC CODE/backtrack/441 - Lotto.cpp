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
string s,ans;
vector<int>v,ss;
vector<int>taken(100,0);
map<string,int>f;
int n,num;
void bk()
{
    if(v.size()==6)
    {
        for(int i=1;i<v.size();i++) if(v[i]<v[i-1]) return;
        cout<<v[0];
        for(int i=1;i<v.size();i++) cout<<" "<<v[i]; cout<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            v.push_back(ss[i]);
            bk();
            taken[i]=0;
            v.pop_back();
        }
    }
}
int main()
{
    int ch;
    int p=0;
    while(cin>>n)
    {
        if(n==0) break;
        if(p>0) puts("");
        s="";
        for(int i=0;i<n;i++)
        {
            cin>>ch;
           ss.push_back(ch);
        }
        bk();
        p=1;
        v.clear();
        ss.clear();
        taken.clear();
        f.clear();
    }


    return 0;
}


