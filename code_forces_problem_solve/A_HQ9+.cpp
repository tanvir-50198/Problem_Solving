#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
     char ch1 = 'H';
     char ch2='Q';
     char ch3='9';
     int cnt=0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cnt++;
        }

     }
     if (cnt>=1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;



}
