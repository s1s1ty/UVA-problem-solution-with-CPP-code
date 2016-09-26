#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string yr; long long y4,y55,y15,y400,y100; int p=0,i;
    while(cin>>yr)
    {
        y4=y55=y15=y400=y100=0;
        if(p>0) printf("\n");
        for(i=0;i<yr.size();i++)
        {
            y4=(y4*10+(yr[i]-'0'))%4;
            y400=(y400*10+(yr[i]-'0'))%400;
            y55=(y55*10+(yr[i]-'0'))%55;
            y15=(y15*10+(yr[i]-'0'))%15;
            y100=(y100*10+(yr[i]-'0'))%100;

        }
        if((y4==0 && y100!=0) || y400==0)
        {
            printf("This is leap year.\n");
            if(y15==0)
             printf("This is huluculu festival year.\n");
            if(y55==0)
              printf("This is bulukulu festival year.\n");
        }
        else if(y15==0) printf("This is huluculu festival year.\n");
        else printf("This is an ordinary year.\n");
        p=1;
    }
    return 0;
}
