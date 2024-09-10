#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v;
        for(int i=1;i<=n;++i)
        {   string s;
            cin>>s;
            v.push_back(s);
        }
            int mn_i=n,mx_i=-1;
            int mn_j=m,mx_j=-1;

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++i)
            {
                if(v[i][j]=='#')
                {
                    if(i<mn_i)
                    {
                        mn_i=i;
                    }
                    if(i>mx_i)
                    {
                        mx_i=i;
                    }
                    if(j<mn_j)
                    {
                        mn_j=j;
                    }
                    if(j>mx_j)
                    {
                        mx_j=j;
                    }
                }
            }
        }

    int cnt1=(mn_i+mx_i)/2;
    int cnt2=(mn_j+mx_j)/2;
    cout<<cnt1<<" "<<cnt2<<endl;
    }
}
