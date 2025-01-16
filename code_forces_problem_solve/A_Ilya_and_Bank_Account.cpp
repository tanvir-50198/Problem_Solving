#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]!='-')cout<<s<<endl;
    else
    {
        int x=s.size();
        if(x==3)
        {

            if (s[1]=='0'||s[2]=='0')cout<<0<<endl;
            else
            {
                if(s[x-1]>s[x-2])
                {
                    s.erase(x-1);
                    cout<<s<<endl;
                }
                else
                {
                    s.erase(x-2);
                    s+=s[x-1];
                    cout<<s<<endl;
                }
            }
        }
        else
        {
            if(s[x-1]>s[x-2])
            {
                s.erase(x-1);
                cout<<s<<endl;
            }
            else
            {
                s.erase(x-2);
                s+=s[x-1];
                cout<<s<<endl;
            }
        }
    }
}
