#include<bits/stdc++.h>

using namespace std;
#define SIZE 100
int prime[SIZE];
void sv()
{
    prime[0]=prime[1]=1;
    prime[2]=0;
    for(int i=4;i<=SIZE;i+=2) prime[i]=1;
    for(int i=3;i*i<=SIZE;i+=2)
    {
        if(prime[i]==0)
         for(int j=i*i;j<=SIZE;j+=i)
           prime[j]=1;
    }
}
int main()
{
    sv();
    long long int n;
    while(~scanf("%lld",&n))
    {
        if(n==0) break;
             if(n==2) printf("Perfect: 6!\n");
        else if(n==3) printf("Perfect: 28!\n");
        else if(n==5) printf("Perfect: 496!\n");
        else if(n==7) printf("Perfect: 8128!\n");
        else if(n==13) printf("Perfect: 33550336!\n");
        else if(n==17) printf("Perfect: 8589869056!\n");
        else if(n==19) printf("Perfect: 137438691328!\n");
        else if(n==31) printf("Perfect: 2305843008139952128!\n");

        else if(prime[n]==0) printf("Given number is prime. But, NO perfect number is available.\n");
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
