#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int c=0;
    while(true){
        a++;
        int b=a/1000;
        int c=(a/100)%10;
        int d=(a/10)%10;
        int e=a%10;
        if(b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e){
        cout<<b<<c<<d<<e<<endl;
         break;
        }

    }
}
