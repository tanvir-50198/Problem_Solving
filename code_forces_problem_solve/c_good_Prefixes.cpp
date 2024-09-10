#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int n;
    	cin>>n;
   		long long cnt = 0, sum = 0, mx = 0;
    	for(int i=0;i<n;i++)
   		 {
       		 long long x;
       		 cin>>x;
      		 sum += x;
      		 mx = max(mx, x);
      		 if(mx*2 == sum)cnt++;
  		  }
  		 cout<<cnt<< endl;
    }
}




