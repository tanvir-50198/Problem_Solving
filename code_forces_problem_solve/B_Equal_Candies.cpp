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
        sort(v.begin(),v.end());
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<sum-v[0]*n<<endl;
        }
    }
}
