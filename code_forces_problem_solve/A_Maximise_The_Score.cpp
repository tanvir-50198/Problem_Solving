#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sz = 2*n;

    vector<int>v(sz);
    for(int i = 0; i < sz; i++)cin >> v[i];
    sort(v.begin(),v.end());

    int sum = 0;
    for(int i = 0,j = 1; j < sz; i =i+2, j= j+2)
    {
        sum+=min(v[i],v[j]);
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
