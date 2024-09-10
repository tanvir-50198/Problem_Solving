#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int cnt=0;
    map<int,int>m;
    int x;
    for(int i=1;i<=n;i++)
    {
       cin>>x;
        m[x]++;
        cnt=max(cnt,m[x]);
    }
   cout<<cnt;


}
