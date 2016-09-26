#include<bits/stdc++.h>

#define fst first
#define snd second
#define EPS 1e-7
#define PI 2*acos(0.0)
#define akbarbe ceil
#define akkombe floor
#define N 1000000

using namespace std;

priority_queue<int,vector<int>,less<int> >mypq;

int main()
{
    int t,i,j,k,l,p1,p2,c,c2,q1,q2;
    string s1,s2,l1,l2,ss1,ss2,n1,n2;
    cin>>t;
    scanf(" ");
    while(t--)
    {
        ss1=ss2=l1=l2=n1=n2="";
        c=c2=0;
        getline(cin,s1);
        getline(cin,s2);
        for(i=0; i<s1.size(); i++)
        {
            if(isalpha(s1[i]))
                ss1+=s1[i];
            if(s1[i]==32) ss1+=" ";
        }
        cout<<ss1<<endl;
        for(i=0; i<s2.size(); i++)
        {
            if(isalpha(s2[i]))
                ss2+=s2[i];
            if(s2[i]==32) ss2+=" ";
        }
        cout<<ss2;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]=='<')
            {
                c++;
                if(c==1) p1=i;
                if(c==2) p2=i;
            }
            if(s1[i]=='>')
            {

                c2++;
                if(c2==1) q1=i;
                if(c2==2)
                {
                    q2=i;
                }
            }

        }
        for(j=p1+1; j<q1; j++)
        {
            if(s1[j]!='>')
             l1+=s1[j];
        }
        for(j=q2+1;j<s1.size();j++) n2+=s1[j];
        for(k=q1+1;k<p2;k++) n1+=s1[k];
        //cout<<l1<<" n1==="<<n1<<" n2==="<<n2<<endl;
        for(j=p2+1; j<q2; j++)
        {
            if(s1[j]!='>')
             l2+=s1[j];
        }
        cout<<l2<<n1<<l1<<n2<<endl;
    }
    return 0;
}


