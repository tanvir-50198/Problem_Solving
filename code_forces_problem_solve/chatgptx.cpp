#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[8][8];

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> a[i][j];
            }
        }
        bool found = false;
        for (int i = 0; i < 8; i++) {
            int cntR = 0, cntB = 0;
            for (int j = 0; j < 8; j++) {
                if (a[i][j] == 'R') cntR++;
                if (a[i][j] == 'B') cntB++;
            }
            if (cntR == 8) {
                cout << "R" << endl;
                found = true;
                break;
            }
            if (cntB == 8) {
                cout << "B" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            for (int j = 0; j < 8; j++) {
                int cntR = 0, cntB = 0;
                for (int i = 0; i < 8; i++) {
                    if (a[i][j] == 'R') cntR++;
                    if (a[i][j] == 'B') cntB++;
                }
                if (cntR == 8) {
                    cout << "R" << endl;
                    break;
                }
                if (cntB == 8) {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

