#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0,cnt2=0;
        string s1;
        map<char, int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int cunt = 0;
        for(auto it:mp)
        {
        if(it.second%2!=0) cunt++;
        }
        if(cunt-1<0) cunt = 0;
        else cunt = cunt-1;
        if(k>=cunt && k<=n){
        cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
