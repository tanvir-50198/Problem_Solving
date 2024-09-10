#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin >> t;
    while (t--) {
            int n;
            cin>>n;
            string s;
             string x;

        cin >> s;

        x =s;
        //reverse(s.begin(),s.end());
       sort(s.begin(),s.end());

       if(x==s)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
}
}
