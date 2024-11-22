#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int x=min(a,b);
        if(n%x!=0)cout<<n/x+1<<endl;
        else cout<<n/x<<endl;
    }
}
