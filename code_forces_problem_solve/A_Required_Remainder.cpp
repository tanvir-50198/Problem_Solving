#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int a=(n-y)/x;
        cout<<(a*x)+y<<endl;
    }

}
