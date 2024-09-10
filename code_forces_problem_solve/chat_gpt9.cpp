#include <iostream>
using namespace std;

int minMovesToOne(int n) {
    if (n == 1) return 0;

    int moveCount = 0;

    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
        } else {
            return -1;
        }
        moveCount++;
    }
    return moveCount;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << minMovesToOne(n) << endl;
    }

    return 0;
}

