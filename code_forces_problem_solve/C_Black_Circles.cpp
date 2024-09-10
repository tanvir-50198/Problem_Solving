#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; ++i){
            long long x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }
        long long xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        bool ans2 = true;
        long long cnt = (xs - xt) * (xs - xt) + (yt - ys) * (yt - ys);
        for(int i = 0; i < n; ++i){
            long long x = a[i].first;
            long long y = a[i].second;
            long long q = (x - xt)*(x - xt) +(y - yt) * (y - yt);
            if(q <= cnt){
                ans2 = false;
                break;
            }
        }
        if(ans2){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
