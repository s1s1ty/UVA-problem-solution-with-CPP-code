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
    string p;
    while(getline(cin,p))
    {
        string s="";
        for(int i=0;i<p.size();i++)
        {
            if(p[i]!=32)
               s+=p[i];
        }
        if(s=="") cout<<endl;

        else
        {
            int sum=0;

            for(int i=0; i<s.size(); i++)
            {
               //5 if(s[i]==32) sum=0;

                if(s[i]>='1' && s[i]<='9' || s[i]==32)
                {
                    while(s[i]>='1' && s[i]<='9' || s[i]==32)
                    {
                        if(s[i]==32) sum+=0;
                        else
                        sum+=(s[i]-'0');
                        i++;
                    }
                }
                if(s[i]=='b')
                {
                    for(int j=0; j<sum; j++)
                    {
                        cout<<" ";
                    }
                    sum=0;
                }

                if(s[i]=='!')
                {
                    puts("");
                    sum=0;
                }
                if(s[i]!='b' || s[i]!='!')
                {
                    for(int j=0; j<sum; j++)
                        cout<<s[i];
                    sum=0;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


