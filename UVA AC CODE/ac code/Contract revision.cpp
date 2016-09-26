#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char a[5], b[100000]; string ans; int i,j;
    while(~scanf("%s %s",a,b))
    {
        ans="";
        int c1=strcmp(a,"0");
        int c2=strcmp(b,"0");
        if(c1==0 && c2==0) break;
        for( i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++){
            if(a[i]==b[j]) printf("");
            else if(a[i]!=b[j])
            {
                ans+=b[j];
            }

            }
        }
        for(int x=0;x<ans.size();x++)
          {
              if(ans[x]=='0' && x==ans.size()-1) ans="0";
          }
       if(ans=="") printf("0\n");
       else
        cout<<ans<<endl;
    }
    return 0;
}
