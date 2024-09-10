#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        long long cnt=0;
        while(y>=1)
        {
            y=y/2;
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
}
