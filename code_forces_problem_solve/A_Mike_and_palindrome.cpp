#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    char first;
    char last;
    int cnt=0;
    string s1=s;
    reverse(s1.begin(),s1.end());

   int start = 0;
   int End = s.size()-1;
   while(start < End)
   {
       if(s[start]!= s[End])
       {
           cnt++;
       }
       start++;
       End--;
   }

    if(s1!=s||s.size()%2==0){

    if(cnt==1)cout << "YES\n";
    else cout << "NO\n";

    }
    else cout<<"YES"<<endl;
}
