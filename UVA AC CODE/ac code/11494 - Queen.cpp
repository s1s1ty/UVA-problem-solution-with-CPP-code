#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int x1,x2,y1,y2,x_axis,y_axis,max;
    while(cin>>x1>>y1>>x2>>y2)
    {
        max=-1;
        if(x1==0 && y2==0 && y1==0 &&x2==0) break;
        if(x1==x2 && y1==y2) cout<<"0"<<endl;
        else if(x1==x2 || y1==y2) cout<<"1"<<endl;
        else if(abs(x1-x2)==abs(y1-y2)) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}
