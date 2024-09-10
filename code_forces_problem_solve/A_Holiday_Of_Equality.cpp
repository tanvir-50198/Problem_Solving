#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)cin >> v[i];

    sort(v.rbegin(),v.rend());

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + v[i];

    }
    cout << (n*v[0])-sum << endl;

}
