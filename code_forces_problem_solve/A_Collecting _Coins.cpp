#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
       int x= max(a,b);
       int y=max(x,c);
       int d=y*3;
       int e=a+b+c;
       int m=n+e;
       int z=m-d;
       if(m>d&&m!=d){
       if(z%3==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;

    }
}
