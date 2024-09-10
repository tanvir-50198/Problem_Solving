#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    map<string,int>m;
    while(t--)
    {
        string s;
        cin>>s;
        if(m[s]++>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
