#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> ::iterator it;
    string s,p;
    set<string>st;
    while(cin>>s)
    {
        p="";
        for(int i=0;i<=s.size();i++)
        {
            if(isalpha(s[i]))
            {
              p+=tolower(s[i]);

            }
            cout<<p<<endl;
            else if(p!="")
            {
                st.insert(p);
                p="";
            }

        }

    }
    for(it=st.begin();it!=st.end();it++) cout<<*it<<endl;
    return 0;
}
