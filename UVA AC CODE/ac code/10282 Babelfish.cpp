#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string>mp;
    string out,out1,in,line;
    mp.clear();

    while(getline(cin,line))
    {
        if(line=="\0") break;
        stringstream ss;
        ss<<line;
        ss>>out;
        ss>>out1;
        mp[out1]=out;
    }
    while(cin>>in)
    {
        if(mp[in].length()==0) cout<<"eh"<<endl;
        else cout<<mp[in]<<endl;
    }
    return 0;
}
