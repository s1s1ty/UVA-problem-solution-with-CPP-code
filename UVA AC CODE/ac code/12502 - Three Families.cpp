#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int x,y,z,t_c,t,ans,sub,a,b,sum;
    cin>>t_c;
    for(t=1;t<=t_c;t++)
    {
        cin>>a>>b>>z;
        if(a>b) cout<<(z*(a+(a-b)))/(a+b)<<endl;
        else
        {
            if(b-a>a) cout<<0<<endl;
            else cout<<(z*(a-(b-a)))/(a+b)<<endl;
        }

    }
    return 0;
}
