#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,add,mod,c,flag;
    map<int,int>mp;
    while(cin>>n>>m)
    {

        c=0;
        for(int i=n;i<=m;i++)
        {
            flag=0;
            mp.clear();
            add=i;
            while(add!=0)
            {
                mod=add%10;
                add/=10;
                mp[mod]++;
                if(mp[mod]==2)
                {
                    flag=1; break;
                }
                else
                {
                    flag=0;
                }

            }
            if(flag==0) c++;

        }
        cout<<c<<endl;
    }
    return 0;
}
