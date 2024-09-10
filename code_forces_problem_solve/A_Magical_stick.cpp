#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n/2;
        if(n%2==0){
            cout<<x<<endl;
        }
        else if(n%2!=0){
            cout<<x++<<endl;
        }
    }
}
