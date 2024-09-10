#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int x=n/2;
        string s=to_string(x);
        int cnt=0,cnt2=0;
        for(int i=0;i<s.size();i++)
        {
            if (s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4')
            {
                cnt++;
                cout<<cnt<<endl;

            }
            else cnt2++;

        }
        if(cnt==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
