#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10001][3005];
void fact()
{
    memset( a , 0 , sizeof a);
    a[0][0]=1; a[1][0]=1;
    long long i,j;
    for(i=2;i<=10000;i++)
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
    long long i,j; int num;
    while(cin>>num)
    {
        int count=0;
        cout<<num<<"!"<<endl;
        for(i=3000;i>=0;i--)
         if(a[num][i]!=0) break;
        for(;i>=0;i--){
            //count++;
         cout<<a[num][i];
        }
         cout<<endl;
        cout<<count<<endl;
    }
    return 0;
}
