#include<iostream>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    long long a,b;
    if(x%2==0){
        a=x/2;
        if(a>=y)
        {
            b=(y*2)-1;
            cout<<b;
        }
        else
        {
            b=(y-a)*2;
            cout<<b;
        }
    }
         else {
        a=(x/2)+1;
        if(a>=y)
        {
            b=(y*2)-1;
            cout<<b;
        }
        else
        {
            b=(y-a)*2;
            cout<<b;
        }
    }
}

