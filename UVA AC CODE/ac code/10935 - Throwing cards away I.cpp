#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int v[58];
    int i,f,n,t,s,k;
    while(cin>>n)
    {
        if(n==0) break;
        k=0;

        for(i=1; i<=n; i++)
        {
            q.push(i);
        }

        while(!q.empty())
        {
            f=q.front();
            v[k++]=f;
            s=q.size();
            if(s!=0)
                q.pop();

            t=q.front();

            if(s!=0)
                q.pop();

            q.push(t);

        }
        cout<<"Discarded cards: ";
        for(i=0; i<k-1; i++)
        {
            cout<<v[i];
            if(i!=k-2) cout<<", ";
        }
        cout<<endl;
        cout<<"Remaining card: "<<v[k-1]<<endl;

    }
    return 0;
}
