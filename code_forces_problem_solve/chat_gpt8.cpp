#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi arr_a(n, 0);
        read(arr_a);

        vi arr_b(n + 1, 0);
        read(arr_b);

        int last_val = arr_b.back();

        int ans = 0;
        int flag = 0;

        int min_diff = 1e15;

        for(int i = 0; i < n; i++){
            ans += abs(arr_a[i] - arr_b[i]);

            if(last_val >= min(arr_a[i], arr_b[i]) && last_val <= max(arr_a[i], arr_b[i])){
                flag = 1;
            }

            min_diff = min(min_diff, abs(arr_a[i] - last_val));
            min_diff = min(min_diff, abs(arr_b[i] - last_val));
        }

        if(flag){
            ans++;
            cout << ans << endl;
        }
        else{
            ans += min_diff + 1;
            cout << ans << endl;
        }
    }

    return 0;
}
