#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char a[100000]; int i,t_c,t,s;
    while(gets(a))
    {
        for(i=0;i<strlen(a);i++)
        {
            s=a[i]-7;
            printf("%c",s);
        }
        cout<<endl;
    }
    return 0;
}
