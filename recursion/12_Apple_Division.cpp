#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void subset_sum(int current_idx,long long int current_sum,vector<int>v,int size,vector<long long int>&sumg1)
{
    if(current_idx==size)
    {
        sumg1.push_back(current_sum);
        return;
    }
    //pick the number
    subset_sum(current_idx+1,current_sum+v[current_idx],
    v,size,sumg1);

    //donot pick the number
    subset_sum(current_idx+1,current_sum,
        v,size,sumg1);
    
}



int main()
{
    int n;
    long long total=0;
    // as each number can be max 10^9.
    // so for this numbers total can overflow so use long long 
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        total+=v[i];
    }
    vector<long long int>sumg1;
    /*
    as in subset_sum we r calc sum of each subset. 
    so it might also overflow so it better to use long long
    for storing those sum as well
    */
    subset_sum(0,0,v,n,sumg1);
    long long int minimum=LLONG_MAX,diff;
    for(int i=0;i<sumg1.size();i++)
    {
      diff=(2*sumg1[i])-total;
      minimum=min(minimum,abs(diff));
    }
    cout<<minimum<<endl;
}