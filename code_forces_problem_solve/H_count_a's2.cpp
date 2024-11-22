#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int cnt1=0,cnt2=0;
        for(int i=0;i<b;i++)
        {
            if(s[i]=='a')cnt1++;
        }
        for(int i=0;i<a-1;i++)
        {
            if(s[i]=='a')cnt2++;
        }
        cout<<abs(cnt2-cnt1)<<endl;
    }

}
