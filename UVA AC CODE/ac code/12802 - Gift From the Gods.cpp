#include<bits/stdc++.h>

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

using namespace std;
int prime[N];
int mark[N];
int sv()
{
    int i,j;
    mark[1]=1;
    mark[2]=0;
    for(i=4;i<=N;i+=2) mark[i]=1;
    for(i=3;i*i<=N;i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i*i;j<=N;j+=i)
                mark[j]=1;
        }
    }
}
long long rev(long long num)
{
    long long r=0;
    while(num>0)
    {
        r=r*10+(num%10);
        num/=10;
    }
    return r;
}
int main()
{
    sv();
   long long int num,r;
   while(cin>>num)
   {
       cout<<num*2<<endl;

       if(mark[num]==0)
       {
           r=rev(num); //cout<<r<<endl;
           if(r==num) break;
       }
   }
   return 0;
}


