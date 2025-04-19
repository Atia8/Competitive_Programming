#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1]={0};
    int u,k,x,y=n;
    while(y--)
    {
    cin>>u>>k;
    for(int i=0;i<k;i++)
    {
       cin>>x;
       a[u][x]=1;
    }
     }

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(j<n)
        cout<<a[i][j]<<" ";
        else
        cout<<a[i][j]<<endl;
    }
    
}
}