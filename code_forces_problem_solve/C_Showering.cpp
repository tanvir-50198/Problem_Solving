#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        int a[n],b[n];
        int cnt=0;
        for(int i=0;i<n;i++)cin>>a[i]>>b[i];
        if(a[0]>=s||m-b[n-1]>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(abs(a[i+1]-b[i])>=s)
                {
                    cnt++;
                    break;
                }
            }
            if(cnt>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
