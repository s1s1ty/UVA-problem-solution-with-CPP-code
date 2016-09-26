#include<bits/stdc++.h>

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

using namespace std;


int main()
{
    int n,m,c,t=1;
    string s1,s2,ss1,ss2,num1,num2;
    while(cin>>n)
    {
        getchar();
        ss1=ss2=num1=num2="";

        if(n==0) break;
        for(int i=0; i<n; i++)
        {
            getline(cin,s1);
            ss1+=s1;
            for(int j=0; j<s1.size(); j++)
            {
                if(isdigit(s1[j])) num1+=s1[j];

            }

        }
        cin>>m;
        getchar();
        for(int i=0; i<m; i++)
        {
            getline(cin,s2);
            ss2+=s2;
            for(int j=0; j<s2.size(); j++)
            {
                if(isdigit(s2[j])) num2+=s2[j];
            }

        }
        if(ss1==ss2 && n==m) printf("Run #%d: Accepted\n",t);
        else if(num1==num2) printf("Run #%d: Presentation Error\n",t);
        else printf("Run #%d: Wrong Answer\n",t);
        t++;

    }
    return 0;
}

