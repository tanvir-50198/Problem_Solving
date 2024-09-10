#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,mx=0,ans=0;
    cin>>n>>m;
    int v[m];
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(v,v+m);
    mx=v[m-1]-v[0];

   for(int  i=n;i<=m;i++ )
   {
       ans=v[i-1]-v[i-n];
       ans=abs(ans);
       mx=min(mx,ans);

   }
   cout<<mx;
}
