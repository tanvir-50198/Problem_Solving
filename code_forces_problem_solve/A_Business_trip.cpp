#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(12);
    int sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
    }
    if(n==0)cout<<0<<endl;
    else{
         sort(v.rbegin(),v.rend());
    for(int i=0;i<12;i++)
    {
        sum+=v[i];
        if(sum>=n)
        {
            cout<<++i<<endl;
            break;
        }
        else if(n>sum&&i==11)
        {
            cout<<-1<<endl;
        }
    }
    }
}
