#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<t;i++)
    {
        if(s[i]=='A'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(cnt1>cnt2){
        cout<<"Anton"<<endl;
    }
    else if(cnt1<cnt2){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;

    }
}
