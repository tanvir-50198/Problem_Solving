#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
       cin >>a>>b;
       int i=0,j=0;
        int cnt=0;
       while(i<n&&j<m)
       {
           if(b[j]==a[i])
            {
            i++;
            j++;
            cnt++;
            }
            else{
                j++;
            }
       }
 cout<<cnt<<endl;
    }
        }


