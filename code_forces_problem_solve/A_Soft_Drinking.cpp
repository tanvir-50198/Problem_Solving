#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c ,d, p, nl, np;
    cin  >> n >> k >> l >>  c >> d >> p >> nl >> np;

    int first = ((k*l)/n);
    int sec = c*d;
    int third = p / np;

   cout<<first<<"  "<<sec<<"  "<<third<<endl;

    int ans = min({first, sec, third});
    cout << ans / n;


}
