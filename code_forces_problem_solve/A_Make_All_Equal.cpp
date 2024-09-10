#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        cin>>n;
        map<int,int>mp;
        vector<int>v(n),v1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
          //  v1.push_back(v[i]);
            mp[v[i]]++;
        }
      //  sort(v1.begin(),v1.end());
      //  int sz=unique(v1.begin(),v1.end())-v1.begin();
      //  if(sz==v.size())cout<<n-1<<endl;
      //  else
      //  {
            for(auto u:mp)
            {
                mx=max(mx,u.second);
            }
            cout<<n-mx<<endl;
        //}

    }
}
