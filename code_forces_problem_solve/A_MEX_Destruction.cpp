///In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int deltaX[] = {0, 0, +1, -1};
int deltaY[] = {+1, -1, 0, 0};
//int deltaX[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int deltaY[] = {0, +1, 0, -1, +1, -1, +1, -1};


template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &vec ) {
            os << "{";
                for(auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
                                if( iterator != vec.begin() ) os << ", ";
                                        os << *iterator;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &vec ) {
            os << "[";
                for(auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
                                if( iterator != vec.begin() ) os << ", ";
                                        os << *iterator;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &vec ) {
            os << "[";
                for(auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
                                if( iterator != vec.begin() ) os << ", ";
                                        os << *iterator;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &vec ) {
            os << "[";
                for(auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
                                if( iterator != vec.begin() ) os << ", ";
                                        os << iterator -> first << " = " << iterator -> second ;
                                            }
                    return os << "]";
}

#define debug(arguments...) do {cerr << #arguments << " : "; debug_helper(arguments); } while(0)

void debug_helper () {
            cerr << endl;
}

template <typename T>
void debug_helper( T array[], int size ) {
            for(int index = 0; index < size; ++index) cerr << array[index] << ' ';
                cerr << endl;
}

template <typename T, typename ... Rest>
void debug_helper( T argument, const Rest &... rest) {
            cerr << argument << ' ';
                debug_helper(rest...);
}


int main() {
    optimize();
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        vector<int> inputArray(arraySize);
        for (int index = 0; index < arraySize; index++) cin >> inputArray[index];

        bool containsZero = false;
        int nonZeroSegments = 0;

        for (int index = 0; index < arraySize; ) {
            if (inputArray[index] == 0) {
                containsZero = true;
                index++;
            } else {
                while (index < arraySize && inputArray[index] != 0) {
                    index++;
                }
                nonZeroSegments++;
            }
        }
        int result = min(nonZeroSegments, 2);
        cout << result << endl;
    }

    return 0;
}

