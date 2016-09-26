#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct data
{
    int x,y;
} a[100010],pos[100010];

int cmp(const data &a,const data &b)
{
    if(a.x<b.x) return true;
    else if(a.x==b.x)
    {
        if(a.y<a.y) return true;
    }
    return false;
}
int m;
int uff(int p)
{
    int first=0,max,flag,posi;
    int count=0,l=0,l1=0,str[100010],str1[100010];
    while(1)
    {
        if(first>=m) break;
        max=0; flag=0;
        for(int i=0;i<p;i++)
        {
            if(a[i].x<=first)
            {
                if(max<a[i].y)
                {
                    max=a[i].y; posi=i;
                    flag=1;
                    //count++;
                    //str[l++]=a[i].x; str1[l1++]=a[i].y;
                    //first=max;
                }
            }
        }
        if(flag)
        {
            count++;
            pos[l++]=a[posi];
            first=max;
        }
        else break;

    }
    if(flag)
    {
      cout<<count<<endl;
      for(int j=0;j<l;j++)
       cout<<pos[j].x<<" "<<pos[j].y<<endl;

    }
    else cout<<"0"<<endl;
}
int main()
{
    int t,i,j,t_c=0,m_x,m_n;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        if(t_c>0) cout<<endl;
        cin>>m;
        for(i=0;;i++)
        {

            cin>>a[i].x>>a[i].y;
            if(a[i].x==0 && a[i].y==0) break;

        }
        int p=i;
        sort(a,a+p,cmp);
        uff(p);
        t_c=1;
    }
    return 0;
}
