#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long left = 0, right = 0, sum = 0, max_length = 0;

    while (right < n) {
        sum += a[right];

        while (sum > s) {
            sum -= a[left];
            left++;
        }

        max_length = max(max_length, right - left + 1);
        right++;
    }

    cout << max_length << endl;

    return 0;
}
