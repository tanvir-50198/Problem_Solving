#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int r = 0,sum = 0,cnt = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sum + v[r] <= t) {
            sum += v[r];
            ++r;
        }
        cnt = max(cnt, r - i);
        sum -= v[i];
    }

    cout << cnt << '\n';

    return 0;
}
