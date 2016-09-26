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
/*LL bin_to_dec(LL num)
{
    LL r=0; LL m=1;
    while(num>0)
    {
        r+=(num%10)*m;
        m*=2;
        num/=10;
        }
        //cout<<r<<endl;
        return r;
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


int main()
{
    LL n,life;
    string s,g;
    while(cin>>n)
    {
        if(n==-1) break;
        cin>>s>>g;

        life=0;
        for(LL i=0;i<g.size() && s!="" && life<=6;++i)
        {
                if(s.find(g[i])!= string::npos)
                {
                   s.erase(remove(s.begin(),s.end(),g[i]),s.end());
                }
                else ++life;
        }

        cout << "Round " << n << endl;
        if(s=="") cout<<"You win."<<endl;
        else if(life==7) cout<<"You lose."<<endl;
        else cout<<"You chickened out."<<endl;

    }
    return 0;
}


