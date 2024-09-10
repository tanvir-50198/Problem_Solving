#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        if((a+b+c)&1)cout<<-1<<endl;
        else{
            x=min((a+b+c)/2,a+b);
            cout<<x<<endl;
        }

    }
}
