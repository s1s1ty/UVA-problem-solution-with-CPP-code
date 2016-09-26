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
int main()
{
     int T,num,a;
     cin>>T;
     while(T--)
     {
         cin>>num;
         vector<int>v,v1;
         for(int i=1;i<=num;i++)
         {
             cin>>a;
             v.push_back(a);
         }
         for(int i=1;i<=num;i++)
         {
             cin>>a;
             v1.push_back(a);
         }
         for(int i=0;i<num;i++)
         {
             if(v[i]==0)
             {
                 for(int j=1;j<=v1[i];j++) cout<<" ";
             }
             if(v[i]==1)
             {
                 if(v1[i]==1) cout<<".";
                 if(v1[i]==2) cout<<",";
                 if(v1[i]==3) cout<<"?";
                 if(v1[i]==4) cout<<"\"";

             }
             if(v[i]==2)
             {
                 if(v1[i]==1) cout<<"a";
                 if(v1[i]==2) cout<<"b";
                 if(v1[i]==3) cout<<"c";

             }
             if(v[i]==3)
             {
                 if(v1[i]==1) cout<<"d";
                 if(v1[i]==2) cout<<"e";
                 if(v1[i]==3) cout<<"f";

             }
             if(v[i]==4)
             {
                 if(v1[i]==1) cout<<"g";
                 if(v1[i]==2) cout<<"h";
                 if(v1[i]==3) cout<<"i";

             }
             if(v[i]==5)
             {
                 if(v1[i]==1) cout<<"j";
                 if(v1[i]==2) cout<<"k";
                 if(v1[i]==3) cout<<"l";

             }
             if(v[i]==6)
             {
                 if(v1[i]==1) cout<<"m";
                 if(v1[i]==2) cout<<"n";
                 if(v1[i]==3) cout<<"o";

             }
             if(v[i]==7)
             {
                 if(v1[i]==1) cout<<"p";
                 if(v1[i]==2) cout<<"q";
                 if(v1[i]==3) cout<<"r";
                 if(v1[i]==4) cout<<"s";

             }
             if(v[i]==8)
             {
                 if(v1[i]==1) cout<<"t";
                 if(v1[i]==2) cout<<"u";
                 if(v1[i]==3) cout<<"v";

             }
             if(v[i]==9)
             {
                 if(v1[i]==1) cout<<"w";
                 if(v1[i]==2) cout<<"x";
                 if(v1[i]==3) cout<<"y";
                 if(v1[i]==4) cout<<"z";

             }
         }
         cout<<endl;

     }
    return 0;
}

