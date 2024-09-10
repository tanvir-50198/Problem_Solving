#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> V1(n);
        vector<int> V2(m);

        for (int i = 0; i < n; ++i) {
            cin >> V1[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> V2[i];
        }

        sort(V1.begin(), V1.end());
        sort(V2.begin(), V2.end());

        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (V1[i] + V2[j] <= k) {
                    cnt++;
                } else {

                    break;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

