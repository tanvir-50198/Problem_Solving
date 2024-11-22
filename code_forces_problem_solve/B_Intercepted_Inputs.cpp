#include <bits/stdc++.h>
using namespace std;

void processTestCases() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int length;
        cin >> length;

        vector<int> values(length);
        for (int i = 0; i < length; i++) {
            cin >> values[i];
        }

        int difference = length - 2;
        vector<int> factors;

        for (int i = 1; i * i <= difference; i++) {
            if (difference % i == 0) {
                factors.push_back(i);
                if (i != difference / i) {
                    factors.push_back(difference / i);
                }
            }
        }

        for (int factor1 : factors) {
            int factor2 = difference / factor1;

            if (find(values.begin(), values.end(), factor1) != values.end() &&
                find(values.begin(), values.end(), factor2) != values.end()) {
                cout << factor1 << " " << factor2 << "\n";
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    processTestCases();

    return 0;
}
