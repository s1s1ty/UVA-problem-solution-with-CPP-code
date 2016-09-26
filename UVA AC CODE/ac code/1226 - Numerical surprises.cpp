#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    long int n,len,i,d_s,t,mod; char p[1000000];
    scanf("%ld",&d_s);
    for(t=1;t<=d_s;t++)
    {
        mod=0;
        scanf("%ld",&n); getchar();
        scanf("%s",&p);
        len=strlen(p);
        for(i=0;i<len;i++)
        {
            mod=(mod*10+(p[i]-'0'))%n;
        }
        cout<<mod<<endl;
    }

    return 0;
}
