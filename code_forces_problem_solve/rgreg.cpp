#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(int a, int b, const string& s) {
    int x = s.size();
    int north = 0, east = 0;

    for (int i = 0; i < x; ++i) {
        if (s[i] == 'N') {
            north++;
        } else if (s[i] == 'E') {
            east++;
        } else if (s[i] == 'S') {
            north--;
        } else {
            east--;
        }
    }

    return north == a && east == b;
}

int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (check(a, b, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
