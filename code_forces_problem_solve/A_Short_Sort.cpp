#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       char a,b,c;
       cin>>a>>b>>c;
       if((a=='b'&&b=='c'&&c=='a')||(a=='c'&&b=='a'&&c=='b'))cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }

}

