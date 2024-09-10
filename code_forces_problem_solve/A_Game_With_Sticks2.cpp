#include<bits/stdc++.h>
using namespace std;
int main (){

    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a!=0&&b!=0)
    {
        b=b-1;
        a=a-1;
        cnt=cnt+1;
    }

    if (cnt%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}
