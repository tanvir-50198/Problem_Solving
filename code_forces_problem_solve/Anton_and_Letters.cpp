#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int n=s.size();
    sort(s.begin(),s.end());
    int x= unique(s.begin(),s.end())-s.begin();
    if(n<3)cout<<0<<endl;
    else if (n==3)cout<<1<<endl;
    else cout<<x-4<<endl;
}
