#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    for (int i = 0; i < n; ++i) {
        if (is_prime(arr[i])) {
            cout  << ": Prime\n";
        } else {
            cout  << ": Not Prime\n";
        }
    }

    return 0;
}
