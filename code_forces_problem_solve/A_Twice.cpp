#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        vector<int> numbers(arraySize);
        map<int, int> frequencyMap;

        for (int i = 0; i < arraySize; ++i) {
            cin >> numbers[i];
            frequencyMap[numbers[i]]++;
        }

        int maxPairs = 0;
        for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
            int occurrences = it->second;
            maxPairs += occurrences / 2;
        }

        cout << maxPairs << endl;
    }

    return 0;
}
