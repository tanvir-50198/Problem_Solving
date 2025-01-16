#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long arr1[n+1];
    long long sum1=0;
    for(int i=0;i<=n;i++)
    {
        arr1[i]=sum1;
        sum1+=v[i];

    }
    long long mn=10000000000;
    int cnt=10000000000,cnt2=0;
    for(int i=0;i<=n-k;i++)
    {
        mn=min(mn,(arr1[i+k]-arr1[i]));
        if(cnt>mn)
        {
        cnt=mn;
        cnt2=i;
        }
    }
      cout<<cnt2+1<<endl;

}
