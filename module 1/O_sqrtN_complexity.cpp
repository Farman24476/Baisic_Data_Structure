#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=sqrt(n);i++)//o(sqrt(N))
   {
    if(n%i==0)
   
    {
        cout<<i<<" ";
        if(n/i != i) cout<<i<<endl;
    }
   }
    return 0;
}