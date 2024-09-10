#include <iostream>
#include <vector>

using namespace std;

bool canBeSorted(vector<int>& a) {
    int n = a.size();
    int breaks = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > a[(i + 1) % n]) {
            ++breaks;
        }
    }

    return breaks <= 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canBeSorted(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

