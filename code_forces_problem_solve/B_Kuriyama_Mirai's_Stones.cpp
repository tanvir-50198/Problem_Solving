#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n),v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v2.begin(),v2.end());
    long long arr1[n+1],arr2[n+1];
    long long sum1=0,sum2=0;
    for(int i=0;i<=n;i++)
    {
        arr1[i]=sum1;
        sum1+=v1[i];

        arr2[i]=sum2;
        sum2+=v2[i];
    }

    int t;
    cin>>t;
    while(t--)
    {
        int x,l,r;
        cin>>x>>l>>r;
        if(x==1)cout<<arr1[r]-arr1[l-1]<<endl;
        else cout<<arr2[r]-arr2[l-1]<<endl;

    }
}
