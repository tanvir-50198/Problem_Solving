#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>d(n);
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        d[i]={x,y};
    }
    sort(d.begin(), d.end());
    int count=0;
    for(int i=0;i<n;++i)
    {
        if(s>d[i].first)
        {
            count++;
            s+=d[i].second;
        }

        else
        {
            break;
        }
    }
    if(count==n)cout<<"YES";
    else cout<<"NO";
}
