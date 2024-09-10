#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s;
        char ch;
        int cnt=1,n=s.size();
        if(n==1)
        {
            if(s[0]!='z')
            {
                char ch2=s[0];
            cout<<ch2<<++ch2<<endl;
            }
            else
            {
                char ch2=s[0];
            cout<<ch2<<--ch2<<endl;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                s2+=s[i];
            cout<<s[i];
            if(s[i]==s[i+1]&&cnt==1)
            {
                if(s[i]!='z')
                {
                     ch=s[i+1];
                    cout<<++ch;
                    s2+=ch;
                    cnt++;
                }
                else
                {
                    ch=s[i+1];
                    cout<<--ch;
                    s2+=ch;
                    cnt++;
                }
            }
        }
        if(n==s.size()&&cnt==1)
        {
            char x=s2[s2.size()-1];
            if(x!='z')cout<<++x;
            else cout<<--x;
        }
        cout<<endl;
        }
    }
}

