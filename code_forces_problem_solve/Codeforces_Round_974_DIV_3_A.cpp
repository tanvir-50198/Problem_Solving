#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0,d=0,cnt=0,cnt2=0;
        cin>>a>>b;
        vector<int>v(a);
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<a;i++)
        {
            if(v[i]>=b)
            {

                cnt+=v[i];
                c++;
            }
            if(v[i]==0&&c>0)
            {
                if(cnt!=0)
                {
                  cnt--;
                cnt2++;
                }

            }
        }
    cout<<cnt2<<endl;
    }
}

