#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];


        vector<int> v2 = v;
        sort(v2.begin(), v2.end());
        if (v == v2) {
            cout << "YES" << endl;
            continue;
        }


        int count = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) count++;
        }


        if (v[n - 1] > v[0]) count++;


        if (count <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
