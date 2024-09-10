#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int cnt=0;
    int a[14]={4,7,44,47,74,77,444,777,447,774,477,744,474,747};
    for(int i=0;i<14;i++){
        if(n%a[i]==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else cnt++;
    }
    if(cnt>1)cout<<"NO"<<endl;


}
