#include<iostream>
#include<cstdio>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int num,t,t_c,i,j; char str[10001],ch[1000][1000];
    cin>>num; scanf(" ");
    for(t=1;t<=num;t++)
    {
        gets(str);
        int len=strlen(str);
        int sq=sqrt(len);
        if(sq*sq!=len) cout<<"INVALID"<<endl;
        else
        {
            int k=0,l=0,m=0,n=0;
            for(i=0;i<sq;i++)
            {
                for(j=0;j<sq;j++)
                {

                    ch[i][j]=str[k];
                    k++;
                }

            }
            for(i=0;i<sq;i++)
            {
                for(j=0;j<sq;j++)
                 cout<<ch[j][i];
            }
            cout<<endl;

        }

    }
    return 0;
}
