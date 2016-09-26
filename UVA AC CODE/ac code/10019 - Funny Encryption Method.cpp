#include<bits/stdc++.h>
using namespace std;
int b[10000];
int binary(int num)
{
    int i=1,j=0,sum=0; int mod=num;
    while(mod!=0)
    {
        b[i++]=mod%2;
        mod/=2;
    }
    for(j=i-1;j>0;j--)
    {
        sum+=b[j];

    }
    return sum;

}
int h(int num)
{
    int var;
    while(num)
    {
        int tmp=num%10;
        if(tmp==0) var+=0;
        if(tmp==1) var+=1;
        if(tmp==2) var+=1;
        if(tmp==3) var+=2;
        if(tmp==4) var+=1;
        if(tmp==5) var+=2;
        if(tmp==6) var+=2;
        if(tmp==7) var+=3;
        if(tmp==8) var+=1;
        if(tmp==9) var+=2;
        num/=10;

    }
    return var;

}
int main()
{
    int N_line,m;
    cin>>N_line;
    while(N_line--)
    {
        cin>>m;
        cout<<binary(m);
        cout<<" "<<h(m)<<endl;
    }
    return 0;
}
