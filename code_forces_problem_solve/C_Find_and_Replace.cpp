#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
       d = a/b;
		if (a%b)
			d++;
		if (c>=a-d)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
    }
}
