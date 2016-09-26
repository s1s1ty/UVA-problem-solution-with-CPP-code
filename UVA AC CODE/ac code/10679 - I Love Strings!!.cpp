#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int k,q,i,c;
    string a,b;
    cin>>k;
    getchar();
    while(k--)
    {
        cin>>a;
        cin>>q;
        for(i=1; i<=q; i++)
        {
            cin>>b;
            int x=0;
            c=0;
            for(int j=0; j<a.size(); j++)
            {
                if(a[j]==b[x])
                {
                    x++;
                }
                else break;
            }

            if(x==b.size()) cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }
    return 0;
}
