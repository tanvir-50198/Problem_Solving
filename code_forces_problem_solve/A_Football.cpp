#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==s[i+1])
        {
            cnt++;
        }

        else{
            cnt=0;
        }
        if(cnt>=6)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
}
