#include<bits/stdc++.h>
using namespace std;
int b2d(string s)
{
    unsigned int sum=0,p=0;
    for(int i=0;i<s.size();i++)
    {
        sum=sum*2+s[i]-'0';
    }
    return sum;
}
int main()
{
    unsigned int num,m,n,ans,t=0;
    string s1,s2;
    cin>>num;
    while(num--)
    {
        cin>>s1>>s2;
        m=b2d(s1);
        n=b2d(s2);
        ans=__gcd(m,n);

        if(ans>1) printf("Pair #%u: All you need is love!\n",++t);
        else printf("Pair #%u: Love is not all you need!\n",++t);
    }
    return 0;
}

