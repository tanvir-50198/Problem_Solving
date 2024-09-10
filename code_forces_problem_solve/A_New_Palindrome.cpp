#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0,j=1;i<s.size();i++,j++)
        {
            if(s.size()>3&&s.size()%2==0&&s[i]!=s[j])
            {
                cnt1++;
                break;
            }
            else if(s.size()>3&&s.size()%2!=0&&s[i]!=s[j])
            {
                cnt1++;
                break;
            }

            else
            {
                cnt2++;
              break;
            }
        }
        if(cnt1>0)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
