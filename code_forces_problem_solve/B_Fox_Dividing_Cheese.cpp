#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long gg=__gcd(a,b);
    a/=gg;
    b/=gg;
    long long ans=0;
    while(a%2==0)
    {
        a/=2;
        ans++;
    }
    while(a%3==0)
    {
        a/=3;
        ans++;
    }
    while(a%5==0)
    {
        a/=5;
        ans++;
    }
    while(b%2==0)
    {
        b/=2;
        ans++;
    }
    while(b%3==0)
    {
        b/=3;
        ans++;
    }
    while(b%5==0)
    {
        b/=5;
        ans++;
    }
    if (a == b)
    {
        cout << ans<<endl;
    }
    else
    {
        cout << -1<<endl;
    }

    return 0;
}

