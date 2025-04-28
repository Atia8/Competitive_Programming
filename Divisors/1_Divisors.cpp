#include<iostream>
#include<vector>
#include<algorithm> // for std::reverse
using namespace std;

vector<int> calculate_Divisors(int n)
{
   vector<int>divisor,quotient;
   for(int i=1;i*i<=n;i++)
   {
     if(n%i==0)
     {
        divisor.push_back(i);
        if((n/i)!=i)
        quotient.push_back(n/i);
     }
     
   }
   reverse(quotient.begin(),quotient.end());
   divisor.insert(divisor.end(),quotient.begin(),quotient.end());
   return divisor;
}






int main()
{
    int n;
    cin>>n;
    vector<int>v;
    v=calculate_Divisors(n);
    for(auto i:v)
    {
        cout<<i<<endl;
    }
}