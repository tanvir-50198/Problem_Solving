#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int j=t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        while(m--)
        {
            char s;
            cin>>s;
            if(s=='S')
            {
                int x;
                cin>>x;
                 for(int i=0;i<n;i++)v[i]+=x;
            }
            else if(s=='M')
            {
                int x;
                cin>>x;
                 for(int i=0;i<n;i++)v[i]*=x;
            }
            else if(s=='D')
            {
                int x;
                cin>>x;
                 for(int i=0;i<n;i++)v[i]/=x;
            }
            else if(s=='R')
            {
                reverse(v.begin(),v.end());
            }
             else if(s=='P')
            {
                int x,y;
                cin>>x>>y;
                 swap(v[x],v[y]);
            }
        }
        cout<<"Case "<<j-t<<":"<<endl;
        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }

}
