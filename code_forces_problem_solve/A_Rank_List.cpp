#include<bits/stdc++.h>
using namespace std;

bool cmp (const pair<int, int> &p1, const pair<int, int> &p2)
    {
    if (pl.first p2.first) return 1;

    else if (pl.first p2.first) return (p1.second p2.second); return 0;
    }

int main()
{
    int t,n;
    cin>>t>>n;
    int cnt=0;
    vector<pair<int,int>>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i].first>>v[i].second;
        //v[i].first *= -1;
    }
    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<t;i++)
    {
        if(v[n-1].first==v[i].first && v[n-1].second==v[i].second)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
