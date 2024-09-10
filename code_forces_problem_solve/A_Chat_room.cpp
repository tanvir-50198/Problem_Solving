#include<bits/stdc++.h>
using namespace std;
int main(){

    string  s;
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=="hello"[n])
        {
            n++;
        }
        if(n==5){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}
