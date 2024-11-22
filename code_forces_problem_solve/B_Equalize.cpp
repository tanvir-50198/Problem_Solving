#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int cnt=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(v[i]-v[j])<n&&abs(v[i]-v[j])>0)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    }
}

