#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)ans+=v[i];
            else ans-=v[i];
        }
        cout<<ans<<endl;
    }
}
