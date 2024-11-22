#include<bits/stdc++.h>
using namespace std;

int co(int l,int d,const vector<pair<int,int>>&j)
{
    int count=0;
    for (const auto&job:j) {
        if (max(l,job.first)<= min(l+d-1,job.second))
        {
            count++;
        }
    }
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        {
        int n,d,k;
        cin>>n>>d>>k;

        vector<pair<int,int>>j(k);
        for(int i=0;i<k;++i)
        {
            cin>>j[i].first>>j[i].second;
        }
        int mx=-1,mn=k+1;
        int bb=-1,bm=-1;

        for(int s=1;s<=n-d+1;++s)
        {
            int oc=co(s,d,j);
            if(oc>mx){
                mx=oc;
                bb=s;
            }
            if(oc<mn)
            {
                mn=oc;
                bm=s;
            }
        }
        cout<<bb<<" "<<bm<<"\n";
    }
    return 0;
}
