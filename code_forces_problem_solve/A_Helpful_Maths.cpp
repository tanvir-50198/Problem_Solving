#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    sort(s.begin(),s.end());

    int n=s.size();
    int j = 0;
    char p[n];
   for(int i = 0; i < s.size(); i++)
   {
       if(s[i]!= '+')
       {
          p[j] = s[i];
          ++j;
          p[j] = '+';
          ++j;
       }
   }

   for(int i = 0; i < n; i++)cout << p[i];
   cout << endl;
}


