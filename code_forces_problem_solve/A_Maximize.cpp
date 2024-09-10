#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int cnt = 0;
        for (int i = 0; i < min(n, m); i++) {
            if (a[i] == b[i]) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
