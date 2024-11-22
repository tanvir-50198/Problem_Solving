#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long a,b,sum=0;
    cin>>a>>b;
    vector<long long>v(a),v2(a+1);
    v2[0]=0;

    for(int i=0;i<a;i++)
    {
        cin>>v[i];
        v2[i+1]=v2[i]+v[i];
        sum+=v[i];
    }
    while (b--)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        long long ans=v2[y]-v2[x-1];
        ans=sum-ans;
        long long n=(y-x)+1;
        ans+=n*z;
       if(ans%2==0)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    }

}
