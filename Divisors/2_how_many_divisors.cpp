#include<iostream>
#include<vector>
#include<algorithm> // for std::reverse
using namespace std;

int calculate_Divisors(int a,int b,int c)
{
   vector<int>divisor,quotient;
   int q;
   for(int i=1;i*i<=c;i++)
   {
    /*
    Here we cannot start at 'a' because it can be that
    the starting i like i=1 is smaller than a 
    but q can greater so we have start from 1
    */
     if(c%i==0)
     {
        if((i>=a)&&(i<=b))
        divisor.push_back(i);
        q=c/i;
        if((q!=i)&&(q>=a)&&(q<=b))
        divisor.push_back(q);
     }
     
   }
   
   return divisor.size();
}






int main()
{
    int a,b,c,count;
    cin>>a>>b>>c;
   
    count=calculate_Divisors(a,b,c);
   cout<<count<<endl;
}