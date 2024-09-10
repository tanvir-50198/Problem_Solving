#include<bits/stdc++.h>
using namespace std;
int main (){

    long long n;
    cin>>n;
    int r,cnt=0;
    while(n!=0)
    {
        r=n%10;
        if(r==4||r==7) cnt++;
        n/=10;
    }
        if (cnt==7||cnt==4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
