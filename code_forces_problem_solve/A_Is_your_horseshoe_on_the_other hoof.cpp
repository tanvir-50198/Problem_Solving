#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int cnt=0;
    for(int i=0;i<4;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<4;i++)
    {
        if (v[i]==v[i+1]&&i+1<4)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
