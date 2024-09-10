#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m,n,a;
    cin>>m>>n;

    if(m<n)cout<<-1<<endl;
    else {
        if(m%2!=0)
    {
        m++;
    }
    int x=m/2;

    while(10)
    {
       if(x%n==0)
       {
         a=x;
         break;
       }
       else x++;
    }
    cout<<a<<endl;

    }

}

