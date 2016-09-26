#include<iostream>
using namespace std;
#define n 1000001
int prime[n];
int sv()
{
     prime[2]=1;
     prime[1]=0;
    int i,j;
    for(i=4;i<n;i+=2) prime[i]=0;
    for(i=3;i*i<n;i+=2)
    {
        if(prime[i]==1)
         for(j=i*i;j<n;j+=i) prime[j]=1;
    }
}
int main()
{
    sv();
    int count,num,t;
    while(cin>>num)
    {
        count=0;
        for(t=1;prime[t]<=num;t++)
        {
            count++;
            while(num%prime[t]==0)
            {
                num=num/prime[t];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
