#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> getDigits(ll x, ll y)
{
    vector<int> result;
    result.push_back(1);
    if (x >= 3 || y % 3 == 0)
    {
        result.push_back(3);
    }
    if (y == 5)
    {
        result.push_back(5);
    }
    if (x >= 3 || (x == 2 && y == 7))
    {
        result.push_back(7);
    }
    if (x >= 6)
    {
        result.push_back(9);
    }
    else
    {
        ll fact = 1;
        for (int i = 2; i <= x; i++) {
            fact *= i;
        }
        if ((fact * y) % 9 == 0)
        {
            result.push_back(9);
        }
    }
    return result;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        ll x, y;
        cin >> x >> y;
        vector<int> result = getDigits(x, y);
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}
