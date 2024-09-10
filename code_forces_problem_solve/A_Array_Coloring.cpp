#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
