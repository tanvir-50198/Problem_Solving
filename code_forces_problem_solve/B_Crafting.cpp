#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long cnt1=0,cnt2=0;
        vector<long long>v1(n),v2(n);
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>v2[i];
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0; i<n; i++)
        {
            if((v1[i]<v2[i])&&(v1[i]-cnt1<v2[i]))cnt1=v2[i]-v1[i];
            else
            {
               if(v1[i]-v2[i]>cnt1)cnt1=0;
            }
        }
        if(cnt1>0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

