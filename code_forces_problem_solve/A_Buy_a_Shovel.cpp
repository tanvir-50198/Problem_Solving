#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=1;
    int x=a;
    while(x%10!=0&&(x-b)%10!=0)
    {
        sum++;
        x+=a;
    }
    cout<<sum<<endl;
}
