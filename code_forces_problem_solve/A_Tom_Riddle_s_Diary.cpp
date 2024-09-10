#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;

   map<string,bool>vis;
   int cnt=1;

   while(n--)
   {
       string s;
       cin>>s;
       if(vis[s]==1)
       {
        cout<<vis[s]<<endl;
        cnt++;
       }
       else cout<<"OK"<<endl;

       vis[s]=1;
   }

}
