#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a % 2 == 1 || (a == 0 && b % 2 == 1))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
