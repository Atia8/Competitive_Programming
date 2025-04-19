#include<iostream>
using namespace std;

long long int reach(long long int n,long long int ans)
{
    long long int x;
    if(ans>=n)
    return ans;

    
    x= reach(n,ans*10);
 

    if(x!=n)
    x= reach(n,ans*20);
//    else
   return x;
}


int main()
{
    int t;
    long long int n,ans;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ans=reach(n,1);
      if(ans==n)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
}