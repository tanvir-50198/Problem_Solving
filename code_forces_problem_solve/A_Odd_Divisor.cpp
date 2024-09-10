#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;


       if(n==2){
        cout<<"no"<<endl;
       }
       else if (n % 2== 0 &&(n/2)%2==0) {

            cout << "no"<< endl;
        } else {

            cout <<"yes" << endl;
        }
    }

    return 0;
}
