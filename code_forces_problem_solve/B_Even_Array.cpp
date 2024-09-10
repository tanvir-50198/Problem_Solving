#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (n == 1 && a % 2 != 0) {
                cnt = -1;
            } else if (i % 2 == 0) {
                if (a % 2 != 0) cnt++;
            } else {
                if (a % 2 == 0) cnt2++;
            }
        }
        if(cnt!=cnt2) cout << -1 << endl;
        else cout << cnt2 << endl;
    }
    return 0;
}
