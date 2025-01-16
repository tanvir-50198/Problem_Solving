#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)cin>>v[i];
    long long cnt=v[0]-1;
    for(int i=0,j=1;j<m;i++,j++)
    {
        if(v[i]<v[j])cnt+=v[j]-v[i];

        else if(v[i]>v[j])cnt+=(n-(v[i]-v[j]));

        else continue;
    }
    cout<<cnt<<endl;

}
