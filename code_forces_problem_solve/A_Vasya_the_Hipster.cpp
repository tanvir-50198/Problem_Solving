#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(2);
    for(int i=0;i<2;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int x = v[0];
    cout<< x <<" ";
    int y = (v[1]-v[0])/2;
    cout<<y;

}


