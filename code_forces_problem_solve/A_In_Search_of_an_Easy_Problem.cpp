#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }

    }
    cout<<"EASY"<<endl;
}
