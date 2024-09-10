#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a+b < b+a;
}
int main()
{
    int n; cin >> n;
    vector<string> v;
    while(n--) {
        string str; cin >> str;
        v.push_back(str);
    }
    sort(v.begin() , v.end(),cmp);
    for(auto u : v) {
        cout << u;
    }
    cout << endl;

    return 0;
}
