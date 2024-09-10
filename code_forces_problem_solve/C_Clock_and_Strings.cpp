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

        if(a>b) swap(a,b);
        if(d>c)swap(c,d);
        if(a>d){
            swap(a,d);
            swap(b,c);
        }
        if(a<d && d<b && b<c) cout<<"yes"<<endl;
        else cout<<"no"<<endl;


    }
}
