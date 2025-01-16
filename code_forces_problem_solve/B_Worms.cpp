#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    long long arr1[n+1];
    long long sum1=0;
    for(int i=0; i<n; i++)
    {
        arr1[i]=sum1;
        sum1+=v[i];
    }
    arr1[n] = sum1;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int i=0,j=n,cnt=0,cnt2=0;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(arr1[mid]==x)
            {
                cnt=mid;
                cnt2++;
            }
            if(arr1[mid]<x)i=mid+1;
            else j=mid-1;
        }
        if(cnt2==0)cout<<i<<endl;
        else cout<<cnt<<endl;
    }
}
