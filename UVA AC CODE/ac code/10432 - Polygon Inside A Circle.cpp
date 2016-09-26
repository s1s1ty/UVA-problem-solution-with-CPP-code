#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    double r,n,area;
    while(cin>>r>>n)
    {
        area=0.5*n*r*r*sin((2*PI)/n);
        printf("%.3lf\n",area);
    }
    return 0;

}
