#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    vector<int> v;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            v.push_back(i);
        }
    }
    return v;
}

int main() {
    int n,b;
    cin>>n>>b;
    vector<int> v = sieve(n);
    //for(auto u:v)cout<<u<<" ";
    int ans=0;
    for(int i=5;i<v.size();i++){
        for(int j = 0; j < i - 1; j++){
            if(v[j] + v[j + 1] + 1 == v[i]) ans++;
        }
    }
    if(ans>=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

