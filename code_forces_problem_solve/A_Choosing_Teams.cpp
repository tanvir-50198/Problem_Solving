#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);

    for(int i = 0; i < n; i++)cin >> v[i];

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(5-v[i] >= k)
        {
            cnt++;
        }
    }
    cout << cnt/3 << endl;
}
