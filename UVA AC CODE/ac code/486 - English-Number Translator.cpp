#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,n;
    long long nu,mili,thou;
    while(getline(cin,s))
    {
        nu=mili=thou=0;
        stringstream ss;
        ss<<s;
        while(ss>>n)
        {
            if(n=="negative") cout<<"-";
            else if(n=="zero") nu+=0;
            else if(n=="one") nu+=1;
            else if(n=="two") nu+=2;
            else if(n=="three") nu+=3;
            else if(n=="four") nu+=4;
            else if(n=="five") nu+=5;
            else if(n=="six") nu+=6;
            else if(n=="seven") nu+=7;
            else if(n=="eight") nu+=8;
            else if(n=="nine") nu+=9;
            else if(n=="ten") nu+=10;
            else if(n=="eleven") nu+=11;
            else if(n=="twelve") nu+=12;
            else if(n=="thirteen") nu+=13;
            else if(n=="fourteen") nu+=14;
            else if(n=="fifteen") nu+=15;
            else if(n=="sixteen") nu+=16;
            else if(n=="seventeen") nu+=17;
            else if(n=="eighteen") nu+=18;
            else if(n=="nineteen") nu+=19;
            else if(n=="twenty") nu+=20;
            else if(n=="thirty") nu+=30;
            else if(n=="forty") nu+=40;
            else if(n=="fifty") nu+=50;
            else if(n=="sixty") nu+=60;
            else if(n=="seventy") nu+=70;
            else if(n=="eighty") nu+=80;
            else if(n=="ninety") nu+=90;
            else if(n=="hundred")
            {
                nu*=100;
            }
            else if(n=="thousand")
            {
                thou=nu*1000;
                nu=0;

            }
            else if(n=="million")
            {
                mili=nu*1000000;
                nu=0;
            }

        }
        cout<<nu+mili+thou<<endl;
    }
    return 0;
}
