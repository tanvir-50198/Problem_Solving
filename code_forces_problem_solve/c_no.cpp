#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

#define MODULO 998244353

using namespace std;

// Function to calculate modular multiplication
uint64_t mod_mul(uint64_t a, uint64_t b) {
    return (a * b) % MODULO;
}

// Function to update the Fenwick Tree
void fenwick_update(vector<uint64_t>& fenwick, int n, int index, uint64_t value) {
    while (index <= n) {
        fenwick[index] = mod_mul(fenwick[index], value);
        index += index & -index; // Use -index for bit manipulation
    }
}

// Function to query the Fenwick Tree
uint64_t fenwick_query(const vector<uint64_t>& fenwick, int index) {
    uint64_t result = 1;
    while (index > 0) {
        result = mod_mul(result, fenwick[index]);
        index -= index & -index; // Use -index for bit manipulation
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        vector<uint64_t> fenwick(n + 1, 1); // Initialize Fenwick Tree with 1

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Sort both arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Initialize Fenwick Tree with min(a[i], b[i])
        for (int i = 0; i < n; i++) {
            uint64_t min_val = static_cast<uint64_t>(min(a[i], b[i]));
            fenwick_update(fenwick, n, i + 1, min_val);
        }

        uint64_t product = fenwick_query(fenwick, n);
        cout << product << endl;

        for (int i = 0; i < q; i++) {
            int o, x;
            cin >> o >> x;
            x--; // Convert to 0-based index

            // Update the affected array and Fenwick Tree
            if (o == 1) {
                uint64_t old_val = static_cast<uint64_t>(min(a[x], b[x]));
                a[x]++;
                uint64_t new_val = static_cast<uint64_t>(min(a[x], b[x]));
                fenwick_update(fenwick, n, x + 1, mod_mul(new_val, MODULO - old_val));
            } else {
                uint64_t old_val = static_cast<uint64_t>(min(a[x], b[x]));
                b[x]++;
                uint64_t new_val = static_cast<uint64_t>(min(a[x], b[x]));
                fenwick_update(fenwick, n, x + 1, mod_mul(new_val, MODULO - old_val));
            }

            product = fenwick_query(fenwick, n);
            cout << product << endl;
        }
    }

    return 0;
}
