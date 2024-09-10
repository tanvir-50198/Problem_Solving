#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t>>n;
	map<string ,int>mp;
	while(t--)
    {
        int i;
        string s;
        cin>>s>>i;
        mp[s]+=i;
    }
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
		{
			int i;
			string s;
			cin>>s>>i;
			mp[s]+=i;
		}
        else
        {
            string s;
            cin>>s;
            cout<<mp[s]<<endl;
        }
    }
}

