#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long k;
        cin >> n >> m >> k;

        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        long long min_cost = LLONG_MAX;

        // Try all possible shifts for each row
        for (int shifts = 0; shifts < m; ++shifts) {
            vector<vector<int>> shifted_grid = grid;

            // Apply shifts to the rows
            for (int i = 0; i < n; ++i) {
                rotate(shifted_grid[i].begin(), shifted_grid[i].begin() + shifts, shifted_grid[i].end());
            }

            // DP for minimal path sum
            vector<vector<long long>> dp(n, vector<long long>(m, LLONG_MAX));
            dp[0][0] = shifted_grid[0][0];

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + shifted_grid[i][j]);
                    if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + shifted_grid[i][j]);
                }
            }

            // Calculate total cost
            long long path_sum = dp[n - 1][m - 1];
            long long total_cost = k * shifts + path_sum;
            min_cost = min(min_cost, total_cost);
        }

        cout << min_cost << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
