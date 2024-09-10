#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,cnt2=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]<=1)cnt++;
            else cnt2++;
        }
        if(cnt2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
