#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int x=unique(s.begin(),s.end())-s.begin();
    if(x>2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}

