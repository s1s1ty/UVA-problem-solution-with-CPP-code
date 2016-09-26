#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int r,c,m,ans;
    while(cin>>r>>c)
    {
        if(r==0 && c==0) break;
        m=r*c;
        int g = max(r,c);
        int l = min(r,c);

        if(l<=0) ans = 0;
        else if(l==1) ans=g;
        else if(l==2)
        {
            int k = g/l;
            if(g%2==0)
            {
                if( k % 2 == 0) ans = m/2;
            else ans = r+c ;
            }
            else{
            if( k % 2 == 0) ans = m/2+1;
            else ans = (r+c)-1;
            }
        }
        else ans = (m+1)/2;

        printf("%d knights may be placed on a %d row %d column board.\n",ans,r,c);
    }
    return 0;
}
