#include<iostream>
using namespace std;
int main()
{
    long long num,ans;
    while(cin>>num)
    {
        if(num<0) break;
        if(num==1) ans=0;
        else  ans=num*25;
        cout<<ans<<"%"<<endl;
    }
    return 0;
}
