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

#define PI acos(0.0)
#define EPS 1e-7
#define fr first
#define sc second
#define N 1000000

int x[] = {-1, 0, 0, 1, 1, -1, -1, 1};
int y[] = {0, -1, 1, 0, 1, -1, 1, -1};

int main()
{
    string s;
    int ts;
    cin>>ts;
    while(ts--)
    {
        cin>>s;
        int len=s.size();
        if(s=="1" || s=="4" || s=="78") cout<<"+"<<endl;
        else if(s[len-2]=='3' && s[len-1]=='5') cout<<"-"<<endl;
        else if(s[0]=='9' && s[len-1]=='4') cout<<"*"<<endl;
        else cout<<"?"<<endl;
    }
    return 0;
}

