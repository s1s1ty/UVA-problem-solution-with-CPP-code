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

string B[17]= {"Happy", "birthday", "to" ,"you", "Happy", "birthday" ,"to" ,"you" ,"Happy" ,"birthday" ,"to", "Rujia" ,"Happy" ,"birthday" ,"to" ,"you"};
int main()
{
    string input[105];
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>input[i];
        }
        int j=0,k=0;
        if(n<=16)
        {

            while(B[j]!="\0")
            {
                if(k==n) k=0;
                cout<<input[k]<<": "<<B[j]<<endl;
                k++;
                j++;
            }
        }
        else
        {
            int t=0,p=0;
            while(t!=n)
            {
                if(p==16) p=0;
                cout<<input[t]<<": "<<B[p]<<endl;
                t++;
                p++;
            }
            int b=0;
            if(p!=16)
                while(p!=16)
                {
                    cout<<input[b]<<": "<<B[p]<<endl;
                    b++;
                    p++;
                }
        }
    }
    return 0;
}

