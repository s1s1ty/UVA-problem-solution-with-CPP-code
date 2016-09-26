#include<iostream>
using namespace std;
#define SIZE 1000000
int prime[SIZE];
int mark[SIZE];
int sv()
{
    int i,j;
    prime[1]=1;
    prime[2]=0;
    for(i=4;i<SIZE;i+=2) prime[i]=1;
    for(i=3;i*i<=SIZE;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<SIZE;j+=i)
             prime[j]=1;
        }
    }
    for(i=1,j=0;i<=SIZE;i++)
    {
        if(prime[i]==0)
          mark[j++]=i;
    }
}
int main()
{
    sv();
   long long int n,a=0,b=0,sum,l=0,i;
    while(cin>>n && n!=0)
    {
        cout<<n<<":"<<endl;
        for(i=0;i<=n;i++)
        {
            int x=n-mark[i];
            if(prime[x]==0 && x>0){
                if(x<mark[i]){
                  cout<<x<<"+"<<mark[i]<<endl;
                   break;
                }
                else
                {
                    cout<<mark[i]<<"+"<<x<<endl;
                   break;
                }
            }
            else if(i==n || x<=0)
            {
                cout<<"NO WAY!"<<endl; break;
            }

        }

    }
    return 0;
}
