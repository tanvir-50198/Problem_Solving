#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;

        int cnt1=0,cnt2=0;
        int sz1=s1.size();
        int sz2=s2.size();
        if(sz1<sz2)
        {
        swap(s2,s1);
        swap(sz1,sz2);
        }
        for(int i=0;i<sz2;i++)
        {
            for(int j=0;j<sz1;j++)
            {
                if(s2[i]==s1[j])
                {
                    cnt1++;
                }
            }
            if(cnt1==0)
            {
                cnt2++;
            }
            else cnt1=0;

        }
//cout<<sz1<<"  "<<cnt2<<endl;
        cout<<sz1+cnt2<<endl;



    }
}
