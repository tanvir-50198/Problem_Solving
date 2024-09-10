#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Check if all elements are the same
    bool all_same = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            all_same = false;
            break;
        }
    }
    if (all_same) {
        cout << "NO" << endl;
        return;
    }


    cout << "YES" << endl;
    if (a[0] == a[1]) {

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                cout << "B";
            } else {
                cout << "R";
            }
        }
    } else {

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                cout << "R";
            } else {
                cout << "B";
            }
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
