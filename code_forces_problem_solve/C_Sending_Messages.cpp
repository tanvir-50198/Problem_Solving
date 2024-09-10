#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,f,a,b,x;
        cin>>n>>f>>a>>b;
        vector<long long>v(n+1);
        v.push_back(0);
        for(int i=1;i<=n;i++)cin>>v[i];
       // for(int i=0;i<=n;i++)cout<<v[i]<<"  ";
        for(int i=0;i<n;i++)
        {
            x=min((v[i+1]-v[i])*a,b);
            f=f-x;
        }
        if(f>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
