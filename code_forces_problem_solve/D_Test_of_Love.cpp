#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m,k,cnt=0,cnt2=0;
        string s;
        cin>>n>>m>>k>>s;

        if(m>n)cout<<"YES"<<endl;
        else if(m==n)
        {
            if(s[n-1]=='L'||s[0]=='L')cout<<"YES"<<endl;
            else if(s[n-1]=='W'&&k>0)cout<<"YES"<<endl;
           // else if(s[0]=='W'&&k>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(s[0]=='C')
            {
                for(int i=m-1;i<n;i+=m)
                {
                    if(s[i]=='W')cnt++;
                    if(s[i]=='C')cnt2++;
                }
                if (cnt2>0)cout<<"NO"<<endl;
                else if(cnt<=k)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                for(int i=0;i<n;i+=m)
                {
                    if(s[i]=='W')cnt++;
                    if(s[i]=='C')cnt2++;
                }
                if (cnt2>0)cout<<"NO"<<endl;
                else if(cnt<=k)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }

        }
    }
}
