#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int even_count = 0, odd_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
        }
        if(even_count==n)cout<<0<<endl;
       else  cout <<even_count << endl;
    }

    return 0;
}

