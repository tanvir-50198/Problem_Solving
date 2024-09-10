#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[8][8];

    int cnt3=0,cnt4=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<8;i++)
    {
        int cnt=0,cnt2=0;
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='B')cnt++;
            if(a[i][j]=='R')cnt2++;

        }

    }
if(cnt==8)cout<<"B"<<endl;
            if(cnt2==8)cout<<"R"<<endl;
}
/*if(a[j][i]=='R')cnt3++;
            if(a[j][i]=='B')cnt4++;
            if(cnt3==8)cout<<"R"<<endl;
            if(cnt4==8)cout<<"B"<<endl;*/
