#include<bits/stdc++.h>

using namespace std;

char str[5000];
int main()
{
    int i,j,s,sp,c; string cp,fst;
    while(gets(str))
    {
        int len = strlen (str);
        if(strcmp(str,"*")==0 && len==1)
            break;

        sp=c=0;

        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>='A' && str[i]<='Z')
               str[i]=str[i]+32;
        }
         fst=cp="";
        fst=str[0];
        for(j=1;j<strlen(str);j++)
        {
            if(str[j]==32)
             {
                 sp++;
                 cp=str[j+1];
                 if(fst==cp)
                      c++;
             }

        }
        if(c==sp) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
