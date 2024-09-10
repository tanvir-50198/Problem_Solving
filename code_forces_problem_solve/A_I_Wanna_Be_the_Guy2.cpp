#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    set<int>s;
    int p,q;
    cin>>p;

    for(int i=0;i<p;i++)
    {
        int a ;
        cin>>a;
        s.insert(a);
    }
    cin>>q;
     for(int i=0;i<q;i++)
    {
        int a ;
        cin>>a;
        s.insert(a);
    }
    auto x=s.end();
    //cout<<*x<<endl;
    if(t<=*x)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;


}
