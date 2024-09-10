#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    auto x = unique(s.begin(), s.end());

    s.erase(x, s.end());

    int a=s.size();


    cout << a<<s << endl;

    return 0;
}
