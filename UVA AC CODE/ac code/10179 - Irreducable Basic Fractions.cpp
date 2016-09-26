#include<iostream>
using namespace std;
int fi(long long int n)
     {
       int result = n;
       for(int i=2;i*i <= n;i++)
       {
         if (n % i == 0) result -= result / i;
         while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
       return result;
     }
int main()
{
    long long  int i,num;
    while(cin>>num)
    {
        if(num==0) break;
        cout<<fi(num)<<endl;
    }
    return 0;
}

