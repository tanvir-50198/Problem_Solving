#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for(int i = 0; i<5; i++)
    {
        if(s[i] == 'A')x++;
        else y++;
    }
    if(x > y)cout << "A" << endl;
    else cout << "B" << endl;

    }

}
