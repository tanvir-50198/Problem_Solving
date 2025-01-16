#include <bits/stdc++.h>
using namespace std;
#define optimizeIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimizeIO();
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        vector<int> arrayA(arraySize), arrayB(arraySize);
        for (int i = 0; i < arraySize; i++) cin >> arrayA[i];
        for (int i = 0; i < arraySize; i++) cin >> arrayB[i];

        vector<int> maxDifference(arraySize + 1, 0);

        for (int index = 1; index <= arraySize; index++) {
            maxDifference[index] = maxDifference[index - 1];
            maxDifference[index] = max(maxDifference[index], maxDifference[index - 1] + arrayA[index - 1] - (index < arraySize ? arrayB[index] : 0));
        }

        cout << maxDifference[arraySize] << endl;
    }

    return 0;
}
