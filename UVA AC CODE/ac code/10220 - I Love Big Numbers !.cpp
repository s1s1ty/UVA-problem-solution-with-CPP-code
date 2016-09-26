#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int a[1001][3001];
int store[5005];
void fact()
{
    memset( a , 0 ,sizeof a);
    a[0][0]=1; a[1][0]=1;
    long i,j;
    for(i=2;i<=1000;i++)
    {
        for(j=0;j<=3000;j++)
        {
            a[i][j]+=i*(a[i-1][j]);
            if(a[i][j]>9)
            {
                a[i][j+1]=a[i][j]/10;
                a[i][j]%=10;

            }
        }
    }
}
int main()
{
    fact();
    int num; long long sum,i,j;
    while(cin>>num)
    {
        sum=0;
        for(i=3000;i>=0;i--)
         if(a[num][i]!=0)
           break;
        for(;i>=0;i--)
          {
              sum+=a[num][i];
          }
          cout<<sum<<endl;
    }
}
