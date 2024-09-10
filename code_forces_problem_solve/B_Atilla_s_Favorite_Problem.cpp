#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.rbegin(),s.rend());
        char ch=s[0];
        int x=ch;
        cout<<x-96<<endl;
    }
}
