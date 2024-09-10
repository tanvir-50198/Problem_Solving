#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        long long cnt1=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            cnt1+=(v[i]*2)-1;
        }
         cout<<cnt1<<endl;
}

}
