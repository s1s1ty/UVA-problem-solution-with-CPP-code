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
#include <bitset>
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
#define delect(str) str.erase(std::remove_if(str.begin(), str.end(), str[i]), str.end());

int xx[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int yy[] = {0, -1, 1, 0, 1, -1, 1, -1};

int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2};
int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1};

/*bool mark[N];
vector<int>prime;
void seive()
{
    mark[0]=1;
    mark[1]=1;
    mark[2]=0;
    for(int i=4; i<N; i+=2) mark[i]=1;
    for(int i=3; i*i<=N; i+=2)
    {
        if(mark[i]==0)
        {
            for(int j=i*i; j<=N; j+=i+i) mark[j]=1;
        }
    }
    prime.push_back(2);
   /* for(int i=3,k=1; i<=N; i+=2)
    {
        if(mark[i]==0) prime.push_back(i);
    }
}*/
/*int list_pf[10000];
int ls;
void prime_factor(int n)
{
    ls = 0;
    for(int i=0; prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                list_pf[ls++]=prime[i];
            }
        }
    }
    if(n>1)
    {
        list_pf[ls++]=n;
    }
}*/
/*LL divisor_count(LL n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n) c+=1;
        else if(n%i==0) c+=2;
    }
     return c;
}*/
/*LL sum_of_divisor(LL num)
{
    LL sum = 1; int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
            sum+=num/i;
        }
        if(i*i==num) sum-=i;
    }
    return sum;
}*/

/*class data{
    public:
  int x,y;
}a[1010];
bool cmp(const data &a, const data &b)
{
    if(a.x < b.x) return true;
    else if(a.x == b.x)
    {
        if(a.y > b.y) return true;
    }
    return false;
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
double incircle(double A,double B,double C)
{
    return TAREA(A,B,C)/semi_perimeter(A,B,C);
}
double excircle(double A,double B,double C)
{
    double AA=TAREA(A,B,C);
    return A*B*C/(4*AA);
}*/
/*int a[101][305];
void fact()
{
    memset( a , 0 , sizeof a);
    a[0][0]=1;
    a[1][0]=1;
    long long i,j;
    for(i=2; i<=100; i++)
    {
        for(j=0; j<=300; j++)
        {
            a[i][j]+=i*(a[i-1][j]);
            if(a[i][j]>9)
            {
                a[i][j+1]=a[i][j]/10;
                a[i][j]%=10;
            }

        }
    }
}*/

int main()
{
    LL n;
    while(cin>>n)
    {
        if(n==0) break;
        string s;
        cin>>s;
        LL z = s.find("Z");
        if(z!=string::npos) cout<<"0"<<endl;
        else
        {
            LL m1=2000005; LL m2 = 2000005;
            vector<LL>vd,vr;
            LL r = s.find("R",0);
            while(r!=string::npos)
            {
                vr.push_back(r);
                r=s.find("R",r+1);
            }
            LL d = s.find("D",0);
            while(d!=string::npos)
            {
                 vd.push_back(d);
                 d=s.find("D",d+1);

            }
           for(int i=0;i<vr.size();i++)
           {
              for(int j=0;j<vd.size();j++)
              {
                  m1 = min(abs(vd[j]-vr[i]),m1);
              }
           }
           cout<<m1<<endl;
        }
    }
    return 0;
}
