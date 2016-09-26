#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    char s[10000]; int len,i,j,start,end;
    while(gets(s))
    {
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]!=32) start=i;
            while(s[i]!=32 && i<len)
            {
                  i++;
            }
            end=i;
            for(j=end-1;j>=start;j--) cout<<s[j];
            if(s[i]==32) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
