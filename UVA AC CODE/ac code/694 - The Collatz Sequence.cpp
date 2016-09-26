#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,i,max,t=1,count;
    while(~scanf("%lld %lld",&a,&b))
    {
        if(a<0 && b<0) break;
            count=1;
            i=a;
            while(i!=1)
            {
                if(i%2==0)
                {
                    i=i/2;

                }
                else
                {
                    i=3*i+1;

                }
                if(i>b) break;
                 count++;
            }
       cout<<"Case "<<t<<": A = "<<a<<", limit = "<<b<<", number of terms = "<<count<<endl;
        t++;
    }
    return 0;
}
