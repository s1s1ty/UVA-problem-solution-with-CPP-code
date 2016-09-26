#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,y[200],m[200],d[200],min,max,x[200],z; char name[50][50];
    while(cin>>t)
    {
          max=0; min=1000000000;
        for(int i=0;i<t;i++){
         scanf("%s %lld %lld %lld",name[i],&d[i],&m[i],&y[i]);
           x[i]=(y[i]*10000)+(m[i]*100)+d[i];
           if(max<x[i]) max=x[i];
           if(min>x[i]) min=x[i];
        }
        for(int i=0;i<t;i++){
         if(max==x[i])
         {
            cout<<name[i]<<endl; break;
         }
        }
        for(int i=0;i<t;i++){
            if(min==x[i])
            {
                cout<<name[i]<<endl;
          break;
            }

        }
    }
    return 0;

}
