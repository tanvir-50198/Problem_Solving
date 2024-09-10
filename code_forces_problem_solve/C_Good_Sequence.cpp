#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int ,int>m;
    for(auto u:v)
    {
        m[u]++;
    }
    int cnt=0;
    for(auto u:m)
    {
       if(u.second>=u.first)cnt+=(u.second-u.first);
       else cnt+=u.second;
    }
    cout<<cnt;

}
