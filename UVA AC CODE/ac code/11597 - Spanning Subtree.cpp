#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<"Case "<<t<<": "<<n/2<<endl;
        t++;
    }
    return 0;
}
