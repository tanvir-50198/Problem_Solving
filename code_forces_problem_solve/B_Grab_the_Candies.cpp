#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)cnt+=v[i];
            else cnt2+=v[i];
        }
        if(cnt>cnt2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
