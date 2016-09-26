#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,count,i,m,min;
    while(cin>>a>>b)
    {
        if(a==0 || b==0) break;
        if(a>b) swap(a,b);
        long long max=0;
        for(i=b;i>=a;i--)
        {
            unsigned int  n=i; count=1;
            if(n&1) n=3*n+1;
            else n=n/2;

            while(n!=1){

                if(n&1) n=3*n+1;
                else n=n/2;
                count++;
            }
            if(count>=max)
            {
                max=count;
                m=i;
            }

        }
        //cout<<count<<endl;
        cout<<"Between "<<a <<" and "<<b<<", "<<m<<" generates the longest sequence of "<<max<<" values."<<endl;

    }
    return 0;
}
