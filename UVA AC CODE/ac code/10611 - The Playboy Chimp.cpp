#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,q,i,j;
    long h[100000],l[100000],high,low;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++) scanf("%ld",&h[i]);
        scanf("%d",&q);
        for(j=0; j<q; j++) scanf("%ld",&l[j]);

        for(j=0; j<q; j++)
        {
            high=0;
            low=0;
            int flag=0;
            for(i=0; i<n; i++)
            {
                if(l[j]<h[i] && flag==0)
                {
                    high=h[i];
                    flag++;
                }
                if(l[j]>h[i])
                {
                    low=h[i];

                }
            }

            if(high==0) printf("%ld X\n",low);
            else if(low==0) printf("X %ld\n",high);
            else
                printf("%ld %ld\n",low,high);
        }
    }
    return 0;
}
