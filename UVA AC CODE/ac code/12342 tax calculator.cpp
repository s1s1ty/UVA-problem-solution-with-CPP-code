#include<bits/stdc++.h>
using namespace std;

int main()
{
    double tax,income;
    int T=0,cs;
    cin>>cs;
    while(cs--)
    {
        cin>>income;
        tax=0.0;
        if(income<180000.0)
        {
            tax=0;
        }
        else if(income>180000.0 && income<=480000.0)
        {
            tax=(income-180000.0)*0.1;

        }
        else if(income>480000.0 && income<=880000.0)
        {

            income=income-180000.0;
            tax=300000.0*0.1;
            tax+=(income-300000.0)*0.15;

        }
        else if(income>880000.0 && income<=1180000.0)
        {
            income=income-180000.0;
            tax=300000.0*0.1;
            tax+=400000.0*0.15;
            tax+=(income-700000.0)*0.20;
        }
        else if(income>1180000.0)
        {
           income=income-180000.0;
            tax=300000.0*0.1;
            tax+=400000.0*0.15;
            tax+=300000*0.20;
            tax+=(income-1000000.0)*0.25;

        }
        if(tax<2000.0 && tax>0.0) tax=2000.0;
        cout<<"Case "<<++T<<": "<<(long long)ceil(tax)<<endl;
    }
    return 0;
}
