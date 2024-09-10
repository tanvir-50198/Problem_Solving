#include<bits/stdc++.h>
using namespace std;

const int mx = 5e3+123;
int a[mx];

int main ()
{
    int n;
    cin>>n;

    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    int ans = 0;

    for ( int i = 0; i < n; i++ ) ans = max ( ans, mp[a[i]] );
    cout << ans << endl;
}
