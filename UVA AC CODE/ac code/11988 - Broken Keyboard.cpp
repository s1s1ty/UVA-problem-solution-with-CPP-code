/* Shaonty Dutta
   Bangladesh University
*/

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>

using namespace std;

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000


int main()
{
    string s;
    while(cin>>s)
    {
        list<char>l;
        list<char>:: iterator it=l.begin();

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[') it=l.begin();
            else if(s[i]==']') it=l.end();
            else l.insert(it,s[i]);
        }
        for(it=l.begin();it!=l.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}




