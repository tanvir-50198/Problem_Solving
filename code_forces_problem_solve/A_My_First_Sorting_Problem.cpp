#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        if (a>b){
            cout<<b<<" "<<a<<endl;
        }
        else if (a<b){
            cout<<a<<" "<<b<<endl;
        }
        else
            cout<<a<<" "<<b<<endl;

    }
}
