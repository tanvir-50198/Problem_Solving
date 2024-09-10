#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==6||n==28||n==496||n==8128||n==33550336)cout<<"perfect"<<endl;
        else if(n==12|| n==18||n==20||n==24||n==30||n==36|| n==40||n== 42||n== 48||n==54|| n==56||n== 60||n== 66||n== 70||n== 72||n== 78||n==80|| n==84||n== 88|| n==90|| n==96|| n==100|| n==102|| n==104|| n==108|| n==112|| n==114|| n==120) cout<<"abundant"<<endl;
        else cout<<"deficient"<<endl;
    }
}
