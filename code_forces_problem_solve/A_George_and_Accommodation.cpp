#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>> t;
    int a,b;
    int cnt=0;
    while(t--)
    {
        cin>>a>>b;
        if((a+1)<b){
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
