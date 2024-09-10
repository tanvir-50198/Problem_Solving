#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b;
    cin>>a>>b;
    if (a!=1&&b!=1){
    if(b%2==0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
