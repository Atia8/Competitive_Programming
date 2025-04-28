// #include<iostream>
// #include<vector>
// #include<algorithm> // for std::reverse
#include<bits/stdc++.h>
using namespace std;

void calculate_Divisors(long long int n,long long int k)
{
   vector<long long int>divisor,quotient;

   for(long long int i=1;i*i<=n;i++)
   /*
   for (i) it is mandatory to give long long int. As n is very large so 
   the condition checking(i*i) may cause overflow
   */
   {
     if(n%i==0)
     {
        divisor.push_back(i);
        if((n/i)!=i)
        divisor.push_back(n/i);
     }
     
   }
  sort(divisor.begin(),divisor.end());
   if(divisor.size()<k)
    cout<<"-1"<<endl;
    else
   cout<<divisor[k-1]<<endl;

}






int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int>v;
    calculate_Divisors(n,k);
 
}

