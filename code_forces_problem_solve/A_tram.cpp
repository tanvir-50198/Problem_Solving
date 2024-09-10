#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    int minimum = 0;
    while(t--)
    {
        int x, y;
        cin >> x >> y;

        sum = sum - x;
        sum = sum + y;
        if(sum > minimum)
        {
            minimum = sum;
        }
    }
    cout << minimum;
}

