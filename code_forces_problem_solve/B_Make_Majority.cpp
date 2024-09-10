#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
    string s;
    int n;
    cin>>n>>s;
    int cnt=0,cnt2=0;
    for(int i=0;i<s.size();i++) {
    if(s[i]=='0' && i>0 && s[i-1]=='0') continue;
    if(s[i]=='0') cnt2++;
    if(s[i]=='1') cnt++;
    }
    if(cnt>cnt2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
}
