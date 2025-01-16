#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c, arr[4001];
    cin>>n>>a>>b>>c;
    vector<int> v(3);
    int mx = 0;
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            for(int k = 0; k <= 10; k++) {
                if((i * v[0]) + (j * v[1]) + (k * v[2]) == n) {
                    mx = max(mx, i + j + k);
                }
            }
        }
    }
    cout << mx << endl;
}
