#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int mx=0,mx2=0,cnt=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i+=2)
        {
            cnt++;
             if(v[i]>mx)mx=v[i];
        }
        for(int i=1;i<n;i+=2)
        {
            cnt2++;
             if(v[i]>mx2)mx2=v[i];
        }
        int x=max(mx+cnt,mx2+cnt2);
        cout<<x<<endl;
    }
}
