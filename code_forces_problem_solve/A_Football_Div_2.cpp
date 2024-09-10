#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;

    string tm1, tm2;
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < t; i++)
        {

        string tm;
        cin >> tm;

        if (i == 0) {
            tm1 = tm;
            cnt1++;
        }

         else if (tm == tm1)
            {
            cnt1++;
        }
         else
            {
            if (cnt2 == 0)
             {
                tm2 = tm;
            }
            cnt2++;
        }
    }

    if (cnt1 > cnt2) {
        cout << tm1 << endl;
    } else {
        cout << tm2 << endl;
    }

}
