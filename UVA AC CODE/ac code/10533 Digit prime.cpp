#include<bits/stdc++.h>
using namespace std;
#define n 1000000
int a[n];
int res[n];
int primes[n];
bool marks[n];
void sieve2()
{

    int i, j, k;
    memset(marks,true,n);
    marks[0] = marks[1] = false;
    for (i=4 ; i<=n ; i+=2)
        marks[i]=false;
    for (i=3 ; i*i<=n ; i+=2)
    {
        if (marks[i]==true)
        {
            for (j=i*i ; j<=n ; j+=i)
                marks[j]=false;
        }
    }
}
void precl()
{
    sieve2();
    int tmp,sum;
    for(int i=1;i<=1000000;i++)
    {
        if(marks[i]==true)
        {
            tmp=i; sum=0;
            while(tmp>0)
            {
                sum+=(tmp%10);
                tmp/=10;
            }
            //cout<<"sum="<<sum<<endl;
            if(marks[sum]==true)
            {
                a[i]=1;
            }
        }
    }
    int s=0;
    for(int j=1;j<=1000000;j++){
        //cout<<a[j]<<" ";
        s+=a[j];
        res[j]=s;
       //cout<<res[j]<<endl;
    }
}
int main()
{
    precl();
    int t1,t2,t,l,x;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        cin>>t1>>t2;
          cout<<res[t2]-res[t1-1]<<endl;
    }
    return 0;
}
