#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
       string s;
       cin>>s;
       if(s.size()==1)
       {
           int a = s[0] - '0';
           int b=((a-1)*10)+1;
           cout<<b<<endl;
        }
       else if(s.size()==2)
       {
            int a = s[0] - '0';
           int b=(a-1)*10;
           cout<<b+3<<endl;
       }
       else if(s.size()==3)
       {
            int a = s[0] - '0';
           int b=(a-1)*10;
           cout<<b+6<<endl;
       }
       else if(s.size()==4)
       {
            int a = s[0] - '0';
            int x=gcd(2,3),
           int b=(a-1)*10;
           cout<<b+10<<endl;
       }
    }
}
