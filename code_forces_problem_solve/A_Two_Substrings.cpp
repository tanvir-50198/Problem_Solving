#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,s2;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='B')s2+=s[i];
    }
    int cnt=0;
    for(int i=0;i<s2.size()-2;i++)
    {
        if(s2[i]=='A'&&s2[i+1]=='B')
            {

           for(int i=s2.size()-1;i>1;--i)
            {
                if(s2[i]=='A'&&s2[i-1]=='B')
                {
                    cnt++;
                }
            }
        }
    }
    if(cnt>0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
