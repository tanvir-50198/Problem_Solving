#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[]={100,20,10,5,1};
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        cnt+=t/a[i];
        t%=a[i];
    }
    cout<<cnt<<endl;

}
