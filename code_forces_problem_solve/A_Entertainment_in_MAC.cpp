#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(),r.end());
    string p = r+s;
    int sz = s.size();
    if(s <= r)
    {
        cout << s << endl;
    }
    else
    {
        cout << p << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}
