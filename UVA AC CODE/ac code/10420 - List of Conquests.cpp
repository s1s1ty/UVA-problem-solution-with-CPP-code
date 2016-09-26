#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    vector<string> v;
    char str[100], p[100];
    string str1,str2;
    int n,i,j=0;
    while(cin>>n){
         scanf(" ");
         str1="";
        for(i=1;i<=n;i++)
        {
            cin>>str;
            gets(p);

            if(m[str]=='\0') v.push_back(str);
            m[str]++;

        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
          cout<<v[i]<<" "<<m[v[i]]<<endl;
          while(!v.empty() && !m.empty())
          {
              v.pop_back();
              m.erase(m.begin());
          }


    }
    return 0;
}
