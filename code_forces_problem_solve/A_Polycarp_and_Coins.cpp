#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,a,b,c;
         cin>>n;
         a=n%3;
         b=n/3;
         if(a%2==0){
            c=(a/2)+b;
            cout<<b<<"  "<<c<<endl;
         }
         else {
         c=b+a;
         cout<<c<<"  "<<b<<endl;
         }
     }
 }
