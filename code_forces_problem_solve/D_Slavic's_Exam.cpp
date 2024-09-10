#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
    int cnt=0;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]==t[cnt])cnt++;
        if(s[i]=='?')
        {
            if(cnt<t.size())
            s[i]=t[cnt++];
            else
            s[i]='a';
        }
    }
    if(cnt>=t.size())cout<<"YES\n"<<s<<endl;
    else cout<<"NO"<<endl;
    }
}
