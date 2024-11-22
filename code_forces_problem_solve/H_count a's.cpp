#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')v.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,cnt=0;
        cin>>x>>y;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=x-1&&v[i]<=y-1)cnt++;
        }
        cout<<cnt<<endl;
    }
}
