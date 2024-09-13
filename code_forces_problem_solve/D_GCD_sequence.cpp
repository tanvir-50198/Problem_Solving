#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int>v(n),v2,v3;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n-1;i++)
        {
            int x=__gcd(v[i],v[i+1]);
            v2.push_back(x);
            v3.push_back(x);

        }
        sort(v3.begin(),v3.end());
        for(auto u:v2)cout<<u<<" ";
        cout<<endl;
        for(auto u:v3)cout<<u<<" ";
        cout<<endl;
        int sz=v2.size();
        for(int i=0;i<sz-1;i++)
        {
            if(v2[i]>v2[i+1])cnt++;
        }
        if(cnt<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

