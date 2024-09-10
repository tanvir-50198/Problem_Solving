#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,coun=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        if(s[i]==s[i+1])coun++;
    }
    cout<<coun;
}
