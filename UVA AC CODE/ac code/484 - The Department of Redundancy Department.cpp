#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m;
    vector<int>v;
     int ch;
    while(cin>>ch)
    {
        if(m[ch]==0) v.push_back(ch);
         m[ch]++;
    }
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" "<<m[v[i]]<<endl;
    return 0;
}
