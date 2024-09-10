#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s1,s2;
      cin>>s1>>s2;
      int cnt=0;
      for(int i=0;i<s1.size();i++)
      {
          if(s1[i]=='?')cnt++;
      }
      if(s1.size()-cnt==s2.size())cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
