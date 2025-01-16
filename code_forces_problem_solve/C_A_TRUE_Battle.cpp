#include <iostream>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int cnt1=0;
        if(s[0]=='1'||s[n-1]=='1')cnt1=1;
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(s[i]=='1'&&s[i+1]=='1')
                {
                    cnt1=1;
                }
            }
        }
        if(cnt1==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

