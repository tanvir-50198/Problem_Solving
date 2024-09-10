#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int crime = 0;
    int police = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x == -1) {
            if (police > 0) {
                police--;
            } else {
                crime++;
            }
        } else {
            police += x;
        }
    }

    cout << crime << endl;

    return 0;
}
