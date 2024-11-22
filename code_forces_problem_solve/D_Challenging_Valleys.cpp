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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int lo=0,hi=1,cnt=0,ans=0;
        if(n==1)cout<<"YES"<<endl;
        else {
            while(hi<n)
            {
            if(v[lo]==v[hi])
            {
                lo++;
                hi++;
            }
           else if(v[lo]<v[hi])
            {
                cnt++;
                lo++;
                hi++;
            }
            else if(v[lo]>v[hi]&&cnt>0)
            {
                ans++;
                break;
            }
            else if(v[lo]>v[hi]&&cnt==0)
            {
                lo++;
                hi++;
            }
        }
        if(ans>0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }
    }
}
