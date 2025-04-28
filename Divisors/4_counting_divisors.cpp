#include<bits/stdc++.h>
using namespace std;
using ll=long long;


//it was hard for me

vector<ll> precompute()
{
vector<ll>pre(1e6+1,0);
ll q;
for(ll i=1;i<=1e6;i++)
{
   for(ll j=i;j<=1e6;j+=i)
   {
      pre[j]+=1;
   }
}
return pre;
}

int main()
{
   ll t;
    cin>>t;
    ll n;
    vector<ll>v;
    v=precompute();
    while(t--)
    {
    cin>>n;
    cout<<v[n]<<endl;
    }
 
}

