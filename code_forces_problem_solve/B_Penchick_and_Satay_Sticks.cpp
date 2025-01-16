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
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v1[i]=v[i];
        }
        sort(v1.begin(),v1.end());
        for(int i=0,j=1;i<n-1;i++,j++)
        {
            if((abs(v[i]-v[j])==1)&&(v[i]>v[j]))
            {
                swap(v[i],v[j]);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if( v1[i]!=v[i])cnt=1;
        }
        if(cnt==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
