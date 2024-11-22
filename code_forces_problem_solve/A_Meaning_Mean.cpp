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
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        long long sum=v[0],mx=0;
        for(int i=1;i<n;i++)
        {
            sum=sum+v[i];
            long long x=sum/2;
            mx=max(mx,x);
            sum=x;
        }
        cout<<mx<<endl;

    }
}
