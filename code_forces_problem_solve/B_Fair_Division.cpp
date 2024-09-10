#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         vector<int>v(n);
         int sum=0;
         int c=0,d=0;
         for(int i=0;i<n;i++)
         {
             cin>>v[i];
             sum+=v[i];
             if (v[i]==1)
             {
                 c++;
             }
             else
             {
                 d++;
             }
         }
         if(n%2==0)
             {
                if(sum%2==0)
                    {
                    cout<<"YES"<<endl;
                    }
                else cout<<"NO"<<endl;
             }
           else
           {
               if((sum%2==0)&&(d!=0&&c!=0))
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
           }

     }
 }
