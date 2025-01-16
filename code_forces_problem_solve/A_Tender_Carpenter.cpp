#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n); // Changed 'vec' to 'arr' for better clarity
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool possible = true; // Changed 'c' to 'possible' for better readability

        for (ll i = 0; i < n; i++) {
            if (i - 1 >= 0 && arr[i - 1] >= arr[i]) {
                if (2 * arr[i] > arr[i - 1]) {
                    possible = false;
                    break;
                }
            } else if (i - 1 >= 0 && arr[i - 1] < arr[i]) {
                if (2 * arr[i - 1] > arr[i]) {
                    possible = false;
                    break;
                }
            }

            if (i + 1 <= n - 1 && arr[i + 1] >= arr[i]) {
                if (2 * arr[i] > arr[i + 1]) {
                    possible = false;
                    break;
                }
            } else if (i + 1 <= n - 1 && arr[i + 1] < arr[i]) {
                if (2 * arr[i + 1] > arr[i]) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "NO" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}
