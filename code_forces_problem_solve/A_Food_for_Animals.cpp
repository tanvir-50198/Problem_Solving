#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        if(a>=x&&b>=y)cout<<"YES"<<endl;
        //if(a==x&&b==y)cout<<"YES"<<endl;
        if(a>=x&&b<y)
        {
            if(b+c>=y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        if(a<x&&b>=y)
        {
            if(a+c>=x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        if(a<x&&b<y)
        {
            if(a+b+c>=x+y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }



    }
}
