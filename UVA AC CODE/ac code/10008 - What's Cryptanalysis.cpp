#include<bits/stdc++.h>
using namespace std;

struct data
{
    int x, y;
}ar[100000];

bool cmp(const data &a, const data &b)
{
    if(a.x < b.x) return true;
    else if(a.x == b.x)
    {
        if(a.y > b.y)
        return true;
    }
    return false;
}
int main()
{
    int n,i,len,j,l; char str[100000],upper_str[100000],lower_str[100000]; int count[100000];
    while(cin>>n)
    {
        scanf(" ");
        memset(count , 0 , sizeof count);
        for(i=1;i<=n;i++)
        {
            gets(str);
             len=strlen(str);
             int p=0;
            while(str[p])
            {
                if(str[p]>='A' && str[p]<='Z') lower_str[p]=str[p]+32;
                else lower_str[p]=str[p];
                p++;
            }

            int u=0;
            while(lower_str[u])
            {
                upper_str[u]=toupper(lower_str[u]);
                u++;
            }

            for(j=0;j<len;j++)
            {
                count[upper_str[j]]++;
            }
        }
        for(l=65;l<=90;l++)
        {
            ar[l].x=count[l];

            ar[l].y=l;
            //cout<<ar[l].y<<" ";
       }
       sort(ar,ar+l,cmp);
        for(int k=90;k>=65;k--)
        {
            if(ar[k].x!=0)
            {
                printf("%c %d\n",ar[k].y,ar[k].x);
            }
        }
    }
    return 0;
}
