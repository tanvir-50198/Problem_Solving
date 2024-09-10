#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
    long long n, m, k;
    cin >> n >> m >> k;
    long long cnt = 0;
    if (m > k)cnt = 0;
    else cnt = min(n, k - m);
    cout << (k - cnt + k + 1) * cnt / 2 + (n - cnt) * m << endl;
    }

}
