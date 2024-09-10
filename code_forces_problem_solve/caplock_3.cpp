#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();

    int cnt = 0;
    int cnt2 = 0;
    for(int i = 0; i < sz; i++)
    {
        if(isupper(s[i]))
        {
            cnt++;
        }
        if(islower(s[0]) && isupper(s[i+1]) && (i+1) < sz)
        {
            cnt2++;
        }
    }
    if(cnt == sz)
    {
        for(int i = 0; i < sz; i++)cout << s[i]+32;
    }
    else if(cnt2 == (sz-1))
    {

        for(int i = 0; i < sz; i++)
        {
            if(i == 0)
            {
                cout << s[i]-32;
            }
            else
            {
                cout << s[i]+32;
            }
        }
    }
    else
    {
        cout << s << endl;
    }
}
