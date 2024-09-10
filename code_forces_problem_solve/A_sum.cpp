#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a  = 3;
    vector<int>v(a);
    for(int i = 0; i < 3; i++)cin >> v[i];
    sort(v.rbegin(),v.rend());
    if (v[0]==(v[1]+v[2]))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }
}
