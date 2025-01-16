#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)cnt++;
    }
    if(cnt==0)cout<<"Poor Alex"<<endl;
    else cout<<"Happy Alex"<<endl;
}

