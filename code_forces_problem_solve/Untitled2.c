#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if(b<a)cout<<b<<" "<<a<<endl;
        else cout<<a<<" "<<b<<endl;
    }
}
