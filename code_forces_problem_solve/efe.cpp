#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n;
        if(n==1)cout<<1<<endl;
        else if(n<=5)cout<<2<<endl;
        else
        {
            if(n%5==0)cout<<n/5<<endl;
            else cout<<n/5+1<<endl;
        }

    }
    return 0;
}

