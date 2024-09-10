#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int mxnum=0,mx;
      for (int i = 0; i < t; ++i) {
        if (v[i] > mxnum) {
            mxnum = v[i];
            mx=i;
        }
    }
    int mnnum=mxnum,mn;
   for (int i = 0; i<t; ++i) {
        if (v[i] <= mnnum) {
            mnnum = v[i];
            mn=i;
        }
    }
    int sz=t-1;
    int x=sz-mn;
     if((mx+mn)<t){
         cout << mx+x<< endl;
     }
     else{
    int y = mx + x;
    cout << y-1<< endl;
     }
    return 0;
}
