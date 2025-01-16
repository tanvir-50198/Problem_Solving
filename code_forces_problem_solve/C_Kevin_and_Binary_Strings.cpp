#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "1100010001101";
    long long y=stoi(s);
    int n = s.size();

    long long mx=0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
                long long x=stoi(s.substr(i, j - i + 1));
            mx=max(mx,(y^x));
        }
    }
    cout<<mx<<endl;
    return 0;
}

