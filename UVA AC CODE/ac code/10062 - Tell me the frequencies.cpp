#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[10010];
struct data
{
    int x, y;
}ar[10010];

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
    char ch[10010]; int p=0,i,t[100],j,k;
    while(gets(ch))
    {
        if(p>0) cout<<endl;
        memset( a , 0 , sizeof a);
        for(i=0;i<strlen(ch);i++)
        {
            a [ ch[i] ]++;
        }
        for(k=32;k<128;k++)
        {
            ar[k].x=a[k];
            ar[k].y=k;
        }

        sort(ar,ar+k,cmp);

        for(j=32;j<128;j++)
        {
            if(ar[j].x!=0)
             printf("%d %d\n",ar[j].y,ar[j].x);

        }
        p=1;
    }
    return 0;
}
