#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
string  a,b,total,store[10000];
int add(int num)
{
    int i,j,carry=0,tmp,ad;
    a=store[num-1]; b=store[num-2]; total="";
    for(i=a.size()-1,j=b.size()-1;i>=0 || j>=0;i--,j--)
    {
        if(i<0) tmp=carry+(b[j]-'0');
        if(j<0) tmp=carry+(a[i]-'0');
        else tmp=carry+(a[i]-'0')+(b[j]-'0');
        carry=tmp/10;
        total+=(tmp%10)+'0';
    }
    if(carry==1) total+='1';
    reverse(total.begin(),total.end());
    store[ num ]=total;
}
int main()
{
    int k,num,ad;
    store[ 0 ]="1";
    store[ 1 ]="2";
    store[ 2 ]="3";
    for(k=3;k<1001;k++)
    {
        ad=add(k);
    }
    while(~scanf("%d",&num))
    {
       cout<<store[num]<<endl;
    }
}
