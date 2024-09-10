#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n;
    cin>>t>>n;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
    }

    for(int i=0,j=0;i<t;j++,i++)
    {
        if (s[i]=='B'){
            s[i]='G';
            s[j+n]='b';

        }

    }
     for(int i=0;i<t;i++)
    {
        cout<<s[i];
    }



        }

