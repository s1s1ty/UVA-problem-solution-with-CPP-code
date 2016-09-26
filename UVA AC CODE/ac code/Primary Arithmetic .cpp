#include<iostream>
using namespace std;
int main()
{
     long long int a,b,sum,count,mod1,mod2,carry;
    while(cin>>a>>b)
    {
         count=carry=0;
        if(a==0 && b==0) break;
        while(a!=0 || b!=0){
        mod1=a%10;
        a=a/10;
        mod2=b%10;
        b=b/10;
        sum=mod1+mod2+carry;
        if(sum>9)
        {
            count++;
            carry=1;
        }
        else carry=0;
        }
        if(count==1) cout<<"1 carry operation."<<endl;
        else if(count>1) cout<<count<<" carry operations."<<endl;
        else cout<<"No carry operation."<<endl;


    }
    return 0;

}
