#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n);
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        if(v1[i]==100)cnt1+=1;
        else cnt2+=1;
    }
        if(n==1)cout<<"NO"<<endl;
        else if(cnt1%2==0&&cnt2%2==0)cout<<"YES"<<endl;
        else if(cnt1%2!=0&&cnt2%2!=0)cout<<"NO"<<endl;
        else if(cnt1==0&&cnt2%2!=0)cout<<"NO"<<endl;
        else if(cnt1%2==0&&cnt2%2!=0)cout<<"YES"<<endl;
        else if(cnt1%2!=0&&cnt2%2==0)cout<<"NO"<<endl;
        else cout<<"NO"<<endl;
}
