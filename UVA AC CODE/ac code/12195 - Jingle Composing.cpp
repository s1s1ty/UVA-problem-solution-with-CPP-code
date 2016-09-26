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
    double sum;
    int res;
    int c,f,f2;
    string s;
    while(cin>>s)
    {
        if(s=="*") break;
        c=0;
        for(int i=0; i<s.size(); i++)
        {
            sum=0.0;
            if(s[i]=='/')
            {
                f=i;
            }

            while(s[i+1]!='/')
            {
                if(i==s.size()-1) break;
                i++;
            }

            f2=i;

            for(int j=f+1; j<=f2; j++)
            {
                if(s[j]=='W') sum+=1.0;
                if(s[j]=='H') sum+=0.5;
                if(s[j]=='Q') sum+=(0.25);
                if(s[j]=='E') sum+=(0.125);
                if(s[j]=='S') sum+=(0.0625);
                if(s[j]=='T') sum+=(0.03125);
                if(s[j]=='X') sum+=(0.015625);

            }

            if(sum==1) c++;
        }
        cout<<c<<endl;

    }
    return 0;
}

