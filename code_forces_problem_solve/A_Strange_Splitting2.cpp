#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                s+='R';
                cnt1++;
            }
            else
            {
                s+='B';
                cnt2++;
            }
        }
        if(cnt1==n||cnt2==n)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

    }

}
