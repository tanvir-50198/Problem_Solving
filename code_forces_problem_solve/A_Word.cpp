#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string c;
    cin>>c;
    int n=c.size();
    int cnt1=0, cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]>='A'&&c[i]<='Z')cnt1++;
        else cnt2++;
    }
    if (cnt1>cnt2){
        transform(c.begin(),c.end(),c.begin(),::toupper);
        cout<<c<<endl;
    }
     else if(cnt1==cnt2){
        transform(c.begin(),c.end(),c.begin(),::tolower);
        cout<<c<<endl;
    }
    else{
        transform(c.begin(),c.end(),c.begin(),::tolower);
        cout<<c<<endl;
    }

}
