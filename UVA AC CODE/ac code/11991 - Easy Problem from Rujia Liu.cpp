#include<iostream>
using namespace std;
int a[1000000],count[1000000],r[1000005][100];
int main()
{
    int k,v,n,m;
    while(cin>>n>>m){

    for(int i=0;i<n;i++)
      cin>>a[i];

    for(int i=0;i<n;i++) count[i]=0;

    for(int i=0;i<n;i++){
      r[a[i]][count[a[i]]++]=i+1;
      //cout<<r[a[i]][count[a[i]]++];
    }

    for(int j=0;j<m;j++)
      {
          cin>>k>>v;
          cout<<r[v][k-1]<<endl;
      }
    }
    return 0;
}
