#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int matrixChainMultiplication(vector<int>& dimensions) {
    int n = dimensions.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[1][n - 1];
}

int main() {
    vector<int> dimensions = {1, 2, 3, 4};
    cout << "Minimum number of multiplications: " << matrixChainMultiplication(dimensions) << endl;
    return 0;
}
