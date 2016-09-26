#include<iostream>
#include<cstring>
using namespace std;
int count[101][101];
int main()
{
    int i,j,ar,b,p=0,t=1; char a[101][101];
    while(cin>>ar>>b)
    {

        if(ar==0 && b==0) break;
        for(i=1;i<=ar;i++)
        {
            for(j=1;j<=b;j++)
            {
                cin>>a[i][j];
            }
        }

        memset(count, 0, sizeof count);

        for(i=1;i<=ar;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(a[i][j]=='*')
                {
                    count[i][j-1]++;
                    count[i][j+1]++;
                    count[i+1][j]++;
                    count[i-1][j]++;
                    count[i+1][j-1]++;
                    count[i-1][j+1]++;
                    count[i-1][j-1]++;
                    count[i+1][j+1]++;
                }


            }
        }
        if(p>0) cout<<endl;
        cout<<"Field #"<<t<<":"<<endl;

        for(i=1;i<=ar;i++)
        {
            for(j=1;j<=b;j++)
            {
               if(a[i][j]=='*') cout<<a[i][j];
               else  cout<<count[i][j];
            }
            cout<<endl;
        }
        p=1;
        t++;
    }

    return 0;
}
