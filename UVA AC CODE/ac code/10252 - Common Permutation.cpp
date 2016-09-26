#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[1005],y[1005]; int i,j; string ans;
    while(gets(x))
    {
        gets(y);
        ans="";
        for(i=0;i<strlen(x);i++)
        {
            for(j=0;j<strlen(y);j++)
            {
                if(x[i]==y[j])
                {
                    ans+=x[i];
                    x[i]='*';
                    y[j]='&';
                }

            }
        }

        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
    }

    return 0;
}
