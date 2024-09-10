#include<bits/stdc++.h>
using namespace std;
int main()
{
    int allUpper = 0;
    int  allUpperExpectFirst = 0;

    string s;
    cin >> s;

    int sz = s.size();
    for(int i = 0; i < sz ; i++)
    {
        if(isupper(s[i]) )
        {
            allUpper++;
        }
        if((islower(s[0])) && (isupper(s[i])))
        {
            allUpperExpectFirst++;
        }
    }
    cout << allUpper << " " << allUpperExpectFirst << endl;

    if(allUpper == sz)
    {
        for(int i = 0; i < sz; i++)
        {
            s[i] = s[i]+32;
        }
        cout << s << endl;
    }
    else if(allUpperExpectFirst  == (sz-1))
    {

         for(int i = 0; i < sz; i++)
        {
            if(i == 0)
            {
                s[i] = s[i]-32;
                continue;
            }
            s[i] = s[i]+32;

        }
        cout << s << endl;


    }
   else
    {
        cout << s << endl;
    }
}
