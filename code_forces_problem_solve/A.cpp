#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,a,b;
       cin>>n>>a>>b;
       int c=a+b;
       if((n%2==0&&c%2==0)||(n%2!=0&&c%2==0))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
}
