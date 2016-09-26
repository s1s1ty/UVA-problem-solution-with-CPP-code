#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,d,sum,minus,count=0; char s[1000],c;
    while(gets(s))
    {

        if(sscanf(s,"%d%c%d=%d",&a,&c,&b,&d)==4)
        {
            if(c=='+' || c=='-')
            {
                sum=a+b;
                minus=a-b;

            }
            if(d==sum|| d==minus)
                count++;

        }
      if(strcmp(s,"0")==0) break;
    }
   cout<<count<<endl;
    return 0;
}
