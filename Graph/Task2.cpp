#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
   int n,m,u,v,center;
   cin>>n>>m;
   int a[n+1]={0};
   for(int i=0;i<m;i++)
   {
      cin>>u>>v;
      a[u]=1;
      a[v]=1;
   }
   for(int i=1;i<=n;i++)
   {
      if(a[i]==0)
      {
      center=i;
      break;
      }
   }
   cout<<n-1<<endl;
   int j=1;
//    for(int i=0;i<(n-1);i++)
//    {
//        if(j==center)
//        {
//         cout<<j+1<<" "<<center<<endl;
//        }
//        else
//        cout<<j<<" "<<center<<endl;
//        j++;
//    }
for(int i=1;i<=n;i++)
{
    if(i!=center)
    cout<<i<<" "<<center<<endl;
}
    
}