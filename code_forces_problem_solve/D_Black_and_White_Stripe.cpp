#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<=n;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int len = s.length();
    int l=0, r=k-1, count = 0;
    loop(r){
        if(s[i]=='W') count++;
    }
    int ans = count;
    while(r<n){
        r++;
        if(r>= n) break;
        if(s[r]=='W') count++;
        if(s[l]=='W') count--;
        l++;
        ans = min(ans, count);
    }
    cout<<ans<<endl;
    }

}

