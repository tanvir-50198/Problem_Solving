#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if(n >= -9) cout << n;
    else {
        n = -n;
        vector<int> d;
        while(n != 0) {
            d.push_back(n % 10);
            n /= 10;
        }
        int m1 = 0;
        for(int i = d.size() - 1; i > 0; i--) m1 = m1 * 10 + d[i];
        int m2 = 0;
        for(int i = d.size() - 1; i >= 0; i--) if(i != 1) m2 = m2 * 10 + d[i];
        cout << -min(m1, m2);
    }
}
