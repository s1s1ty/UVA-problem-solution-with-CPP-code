#include<bits/stdc++.h>
using namespace std;
int a[1005][3001];
void fuc()
{
    int j;
    a[0][0]=1; a[1][0]=1;
    for(int i=2;i<=1000;i++)
    {
        for(j=0;j<=3000;j++)
        {
            a[i][j]+=i*a[i-1][j];
            if(a[i][j]>9)
            {
                a[i][j+1] = a[i][j]/10;
                a[i][j]%=10;
            }
        }
    }
}
int main()
{
    fuc();
    long long i,j,num; int one , two , the , four , five , six , seven , eight , nine,zero;
    while(cin>>num)
    {
        zero = one = two = the = four = five = six = seven = eight = nine = 0;
        if(num==0) break;

        for(i=3000;i>=0;i--)
         if(a[num][i]!=0)
           break;

        for(;i>=0;i--)
        {
            if(a[num][i]==0) zero++;
            else if(a[num][i]==1) one++;
            else if(a[num][i]==2) two++;
            else if(a[num][i]==3) the++;
            else if(a[num][i]==4) four++;
            else if(a[num][i]==5) five++;
            else if(a[num][i]==6) six++;
            else if(a[num][i]==7) seven++;
            else if(a[num][i]==8) eight++;
            else if(a[num][i]==9) nine++;
        }
        printf("%lld! --\n   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",num,zero,one,two,the,four,five,six,seven,eight,nine);

    }
    return 0;
}
