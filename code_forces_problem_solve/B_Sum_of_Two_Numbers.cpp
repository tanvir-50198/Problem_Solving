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
        int i=0,j=n;
        if(n%2==0)
        {
            i=n/2;
            cout<<i<<" "<<i<<endl;
        }
        else
        {
            int x = n / 2;
			int y = (n + 1) / 2;

			string s = to_string(x);
			string t = to_string(y);

			x = 0, y = t.length() - 1;
			for (int i = s.length() - 1; i >= 0; i--) {
				if (s[i] == '9') {
					if (x % 2) {
						s[i] = '4';
						t[y--] = '5';
					}
					else {
						s[i] = '5';
						t[y--] = '4';
					}

					x++;
				}
				else break;
			}
			cout << s << ' ' << t <<endl;
        }
    }
}
