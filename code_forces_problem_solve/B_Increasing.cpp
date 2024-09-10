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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int x=unique(v.begin(),v.end())-v.begin();
        if(v.size()==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
