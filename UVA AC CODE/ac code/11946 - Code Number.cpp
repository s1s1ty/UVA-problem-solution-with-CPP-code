#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    char a[105]; int i,t,j,len,p=0;
    scanf("%d",&t); scanf(" ");
    for(j=1;j<=t;j++)
    {

        if(p>0) cout<<"\n";

        while(gets(a)){
        len=strlen(a);
        if(len==0) break;
        for(i=0;i<len;i++)
        {
            if(a[i]=='0') printf("O");
            else if(a[i]=='1') printf("I");
            else if(a[i]=='2') printf("Z");
            else if(a[i]=='3') printf("E");
            else if(a[i]=='4') printf("A");
            else if(a[i]=='5') printf("S");
            else if(a[i]=='6') printf("G");
            else if(a[i]=='7') printf("T");
            else if(a[i]=='8') printf("B");
            else if(a[i]=='9') printf("P");
            else cout<<a[i];

        }
        printf("\n");
        }

        p=1;
    }
    return 0;
}
