#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int lo=0,hi=1,cnt=0;
    	cout<<s[lo]<<s[hi];
    	lo=2;
    	hi=3;
    	while(hi<=n&&lo<n)
    	{
    		if((s[lo]=='b'||s[lo]=='c'||s[lo]=='d')&&(s[hi]=='a'||s[hi]=='e'))
    		{
    			cout<<"."<<s[lo]<<s[hi];
    			lo+=2;
    			hi+=2;
    		}
    		else if((s[lo]=='b'||s[lo]=='c'||s[lo]=='d')&&(s[hi]=='b'||s[hi]=='c'||s[hi]=='d'))
    		{
    			cout<<s[lo]<<"."<<s[hi]<<s[hi+1];
    			lo+=3;
    			hi+=3;
    		}
    		else if(lo==n-1)
            {
                cout<<s[lo]<<endl;
                lo++;
            }
    		else
            {
                cout<<hi<<endl;
                hi++;
            }


    	}
    	cout<<endl;
    }
}

