#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int year,day,d1,m1,y1,d2,m2,y2,mnth; int t,i,l=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld/%lld/%lld",&d1,&m1,&y1);
        scanf("%lld/%lld/%lld",&d2,&m2,&y2);
        if(d1<d2)
        {
            d1=d1+31;
            day=d1-d2;
            m2=m2+1;
        }
        if(m1<m2)
        {
            m1=m1+12; mnth=m1-m2;
            y2=y2+1;
        }
        year=y1-y2;
        if(year>130) printf("Case #%d: Check birth date\n",i);
        else if(y1<y2) printf("Case #%d: Invalid birth date\n",i);
        else if(year<=130) printf("Case #%d: %lld\n",i,year);
        l=1;

    }
    return 0;
}
