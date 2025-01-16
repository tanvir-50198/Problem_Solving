#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> intervals(n);
        for (ll i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        string result = "";
        set<ll> uniquePoints;
        map<ll, ll> pointCounts;

        for (ll i = 0; i < n; i++) {
            if (intervals[i].first == intervals[i].second) {
                uniquePoints.insert(intervals[i].first);
                pointCounts[intervals[i].first]++;
            }
        }

        vector<ll> sortedPoints;
        for (auto point : uniquePoints) {
            sortedPoints.push_back(point);
        }

        for (ll i = 0; i < n; i++) {
            ll left = intervals[i].first;
            ll right = intervals[i].second;

            if (left == right) {
                if (pointCounts[left] > 1) {
                    result.push_back('0');
                } else {
                    result.push_back('1');
                }
                continue;
            }

            ll lowerBoundIndex = lower_bound(sortedPoints.begin(), sortedPoints.end(), left) - sortedPoints.begin();
            ll upperBoundIndex = lower_bound(sortedPoints.begin(), sortedPoints.end(), right + 1) - sortedPoints.begin();
            ll coveredPoints = (upperBoundIndex - 1) - lowerBoundIndex + 1;

            if (coveredPoints == right - left + 1) {
                result.push_back('0');
            } else {
                result.push_back('1');
            }
        }

        cout << result << endl;
    }

    return 0;
}
