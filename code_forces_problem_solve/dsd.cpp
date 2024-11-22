#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to compute minimum perimeter for each test case
int minPerimeter(int n, const vector<pair<int, int>>& stamps) {
    // Initialize variables to store maximum width and height
    int totalArea = 0;
    int maxWidth = 0, maxHeight = 0;

    // Calculate total area and find maximum width and height
    for (const auto& stamp : stamps) {
        int w = stamp.first;
        int h = stamp.second;

        // Update max width and max height
        maxWidth = max(maxWidth, w);
        maxHeight = max(maxHeight, h);

        // Sum up total area of all stamps
        totalArea += w * h;
    }

    // Minimum perimeter calculation based on optimal placement
    int minPerimeter = 2 * (maxWidth + (totalArea / maxWidth));

    return minPerimeter;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> stamps(n);

        for (int i = 0; i < n; ++i) {
            int w, h;
            cin >> w >> h;
            stamps[i] = {w, h};
        }

        // Output the minimum perimeter for each test case
        cout << minPerimeter(n, stamps) << endl;
    }

    return 0;
}
