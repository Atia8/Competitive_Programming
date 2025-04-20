#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void sum(vector<int>val,vector<int>weight,int t_weight,int size,int idx,int sum_weight,int sum_value,int &maxval)
{
     if(idx==size)
     {
        if((sum_weight<=t_weight)&&(sum_value>maxval))
        {
            maxval=sum_value;
        }
     return;
     }

     //taken
     sum(val,weight,t_weight,size,idx+1,sum_weight+weight[idx],sum_value+val[idx],maxval);

     //nottaken
     sum(val,weight,t_weight,size,idx+1,sum_weight,sum_value,maxval);


}

int main()
{
    int n,t_weight,w,v,maxval=INT_MIN;
    cin>>n>>t_weight;
    vector<int>val(n),weight(n);
    for(int i=0;i<n;i++)
    {
      cin>>w>>v;
      weight[i]=w;
      val[i]=v;
    }
   
    sum(val,weight,t_weight,n,0,0,0,maxval);
    cout<<maxval<<endl;
}