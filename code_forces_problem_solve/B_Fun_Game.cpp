#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  T;
    cin >> T;
    while (T--)
    {

        long long n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;
        int f = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && s1[i] == '1')
            {
                f = 0;
                break;
            }
            if (s[i] == '1')
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
