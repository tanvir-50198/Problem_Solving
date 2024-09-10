#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
         cin>>n>>k;
        long long  x = k/(n-1);
        long long y = x*n;
        long long rm = k%(n-1);
        if(rm==0) cout<<y-1<<endl;
        else cout<<y+rm<<endl;
    }
}
