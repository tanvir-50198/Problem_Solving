#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        string s;
        cin>>s;
        string c=s;
        sort(s.rbegin(),s.rend());
        string b=s;
        sort(s.begin(),s.end());
        string a=s;

        int un=unique(s.begin(),s.end())-s.begin();
        if(un==1)cout<<"No"<<endl;
        else
        {   if(c==b) cout<<"yes\n"<<a<<endl;
            else cout<<"yes\n"<<b<<endl;

        }






    }
}

