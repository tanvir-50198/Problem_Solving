#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int k, vector<int> &a, int m) {
    vector<pair<int, int>> v;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i] / k;
        v.push_back({(k - (a[i] % k)) % k, i});
    }
    sort(v.begin(), v.end());
    for (auto &u : v) {
        int x = u.first;
        int y = u.second;
        if (m >= x) {
            m -= x;
            a[y] += x;
            ans += 1;
        } else {
            break;
        }
    }
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int m;
        cin >> m;
         if(k==1)
        {
            int ans=0;
            for(auto u:a)ans+=u;
                cout<<ans+m<<endl;
        }
        else{
            cout << solve(n, k, a, m) << '\n';
        }
    }
}
