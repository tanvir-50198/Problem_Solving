#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a=0;
        while(n>3)
        {
            n/=4;
            a++;
        }
        long long x=pow(2,a);
        cout<<x<<endl;
    }
}
