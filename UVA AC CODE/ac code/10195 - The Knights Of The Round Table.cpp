#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 100

using namespace std;


int main()
{

    double a,b,c,s,r;
    while(cin>>a>>b>>c)
    {
        if(a==0.0 && b==0.0 && c==0.0) r=0;
        else{
        s=(a+b+c)/2.0;
        double D=s*(s-a)*(s-b)*(s-c);
        double A=sqrt(D);
         r=A/s;
        }
        printf("The radius of the round table is: %.3lf\n",r);

    }
    return 0;
}
