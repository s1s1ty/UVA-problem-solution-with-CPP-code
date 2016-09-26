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

int main()
{
    LL num,n,r,c,cc,rr,x,y,i,j;
    while(cin>>num)
    {
        if(num==0) break;
        rr=cc=0;
        LL v[105][105];
        vector<int>a,b;
        for(i=0; i<num; i++)
        {
            r=0;
            for(j=0; j<num; j++)
            {
                cin>>v[i][j];
                r+=v[i][j];
            }
            a.push_back(r);
        }
        for(int p=0;p<a.size();p++)
        {
            if(a[p]&1)
            {
                rr++; y=p;
            }
        }
        for(i=0; i<num; i++)
        {
            c=0;
            for(j=0; j<num; j++)
            {
                c+=v[j][i];
            }
            b.push_back(c);
        }
        for(int p=0;p<a.size();p++)
        {
            if(b[p]&1)
            {
                cc++; x=p;
            }
        }
        if(rr==0 && cc==0) cout<<"OK"<<endl;
        else if(cc==1 && rr==1)
        {
            printf("Change bit (%lld,%lld)\n",y+1,x+1);
        }
        else cout<<"Corrupt"<<endl;
    }
    return 0;
}

