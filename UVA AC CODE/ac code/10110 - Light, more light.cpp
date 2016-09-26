#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long num,i;
    while(cin>>num)
    {
        if(num==0) break;
        long sqr = sqrt(num);
        if(sqr*sqr==num)
                cout<<"yes"<<endl;
       else cout<<"no"<<endl;

    }
    return 0;
}
