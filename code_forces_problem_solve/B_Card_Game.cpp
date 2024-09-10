#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt1=0;
        if(a>c&&b>=d||a>=c&&b>d){
            cnt1+=2;
            }
        if(a>d&&b>=c||a>=d&&b>c){
            cnt1+=2;
            }
        cout<<cnt1<<endl;
    }
}
