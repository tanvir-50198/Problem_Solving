#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
      long long  arr[n];

      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
     long long mini=10000000000000;
      for(int i=0;i<n-1;i++)
      {
          long long k=max(arr[i],arr[i+1]);
          mini=min(mini,k);
      }
      cout<<mini-1<<endl;

    }
}
