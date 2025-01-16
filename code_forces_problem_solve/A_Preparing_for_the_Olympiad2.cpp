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
       vector<int>v(n),v2(n);
       for(int i=0;i<n;i++)cin>>v[i];
       for(int i=0;i<n;i++)cin>>v2[i];
       v2.push_back(0);
       int sum=0,sum2=0;
       for(int i=0;i<n;i++)
       {
           if(v[i]>v2[i+1])
           {
               sum+=v[i];
               sum2+=v2[i+1];
           }
       }
       cout<<sum-sum2<<endl;
    }
}
