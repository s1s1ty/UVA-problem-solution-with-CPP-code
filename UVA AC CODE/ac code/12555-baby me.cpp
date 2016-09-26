#include<bits/stdc++.h>
using namespace std;

int main()
{
    stringstream ss;
    string sd;
    char input[15];
    int cs,t=0,c,num,f1,f2;
    double ans,n1,n2;
    cin>>cs;
    scanf(" ");
    while(cs--)
    {
        gets(input);
        ss.clear();
        sd="";
        c=f1=f2=num=0;
        ans=0.0;
        for(int i=0; i<=strlen(input); i++)
        {
            if(input[i]>=48 && input[i]<=68)
            {
                sd+=input[i];
                sd+=" ";
            }
        }
        ss<<sd;
        while(ss>>num)
        {
            c++;
            if(c==1)
            {
                f1=num;
            }
            else f2=num;


        }
        //cout<<f1<<" "<<f2<<endl;
        n1=f1*0.5;
        n2=f2*0.05;

        ans=n1+n2;
        printf("Case %d: %g\n",++t,ans);
        //ss.clear();


    }
    return 0;
}
