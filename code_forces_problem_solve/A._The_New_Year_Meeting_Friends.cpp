#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(3);
    for(int i=0;i<3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int x = abs(v[0]-v[1]);
    int y = abs(v[1]-v[2]);
    cout<< x + y;
}

