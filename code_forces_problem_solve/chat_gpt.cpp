#include <iostream>
#include <vector>

using namespace std;

void drawSnake(int n, int m) {
    vector<vector<char>> grid(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Fill the entire row with '#'
            for (int j = 0; j < m; j++) {
                grid[i][j] = '#';
            }
        } else {
            if ((i / 2) % 2 == 0) {
                // Fill the last cell of the row with '#'
                grid[i][m - 1] = '#';
            } else {
                // Fill the first cell of the row with '#'
                grid[i][0] = '#';
            }
        }
    }

    // Print the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    drawSnake(n, m);

    return 0;
}

