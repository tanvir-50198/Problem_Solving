#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int cnt=0,cnt2=0;
    for(int i=0;i<t;i++)
    {
        if(s[i]=='1')cnt++;
        else cnt2++;
    }
    cout<<abs(cnt-cnt2)<<endl;
}
