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
        int cnt1=0,cnt2=0;
        if((n/2)%2!=0)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i++)
            {
                cout<<i<<" ";
                cnt1+=i;
                i++;
            }
            for(int i=1;i<n-1;i++)
            {
                cout<<i<<" ";
                cnt2+=i;
                i++;
            }
            cout<<cnt1-cnt2<<endl;
        }
    }
}
