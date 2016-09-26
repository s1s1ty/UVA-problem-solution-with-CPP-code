#include<bits/stdc++.h>
using namespace std;
long long  store[52][1000];
int pascel()
{
    int i,j; long long ans;
    for(i=0;i<=50;i++)
    {
        ans=1;

        for(j=0;j<=i;j++)
        {
            store[i][j]=ans;

            ans=(ans*(i-j)/(j+1));
        }
    }
}
int main()
{
    pascel();

    long long int i,j,n,num,a=0,b,f,l,para,N=0;
    char str[105],ch,p,b1,b2;
    string str1,str2;

    cin>>n; scanf(" ");

    while(n--)
    {
           gets(str);
        f=1; str1=""; str2=""; num=0;
        while(str[f]!='+')
        {
            str1+=str[f];
            f++;
        }
        l=f+1;
        while(str[l]!=')')
        {
            str2+=str[l];
            l++;
        }
        para=l+2;
        while(str[para]!='\0')
        {
            num=(num*10+str[para]-'0');
            para++;
        }
         cout<<"Case "<<++N<<": ";
        if(num==1) cout<<str1<<"+"<<str2<<endl;

        else{

            j=num;
        for(i=0;i<=num;i++,--j)
        {
            a=num-i; b=i;
            if(store[num][j]==1) cout<<"";
            else cout<<store[num][j]<<"*";
            if(a==0) cout<<"";
            else if(a==1) cout<<str1<<"*";
            else if(b==0) cout<<str1<<"^"<<a;
            else cout<<str1<<"^"<<a<<"*";
            if(b==1) cout<<str2;
            else if(b==0) cout<<"";
            else cout<<str2<<"^"<<b;
            if(i!=num) cout<<"+";
        }
        cout<<endl;
        }

    }
    return 0;
}
