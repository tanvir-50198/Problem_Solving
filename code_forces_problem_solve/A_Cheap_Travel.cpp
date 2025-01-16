#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=min((n*a),(b*(n/m)+(a*(n%m))));
    if(n%m!=0){
    ans=min(ans,b*((n/m)+1));
    }
    cout<<ans<<endl;
}
