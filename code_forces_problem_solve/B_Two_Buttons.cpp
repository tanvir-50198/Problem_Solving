#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
        while(b>a){
            if(b%2!=0)b++;
            else b/=2;
            ans++;
        }
        if(a>b) ans+=a-b;
        cout << ans << endl;

}
