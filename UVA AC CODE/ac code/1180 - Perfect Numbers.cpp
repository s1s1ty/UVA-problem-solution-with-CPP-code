#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int store[]={2,3,5,7,13,17,19,31,61,89,107};

    long num; int n;
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%ld,",&num);
            for(int j=0;j<11;j++)
            {
                if(store[j]==num)
                {
                    cout<<"Yes"<<endl; break;
                }
                else if(j==10) cout<<"No"<<endl;
            }

        }

    }
    return 0;

}
