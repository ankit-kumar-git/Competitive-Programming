#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define set_bits __builtin_popcountll
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define MOD 1000000007
#define INF 1e18


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


ll gcd(ll a, ll b){if (a == 0)return b;return gcd(b % a, a);}
void google(int t) {cout << "Case #" << t << ": ";}
ll countBits(ll n){ll count = 0;while (n){count++;n >>= 1;}return count;}
ll aPowerbModm(ll a, ll b, ll m){if (b == 0)return 1;if (b % 2 == 0){ll t = aPowerbModm(a, (b / 2), m);return (1ll * t * t % m);}else{ll t = aPowerbModm(a, ((b - 1) / 2), m);t = (1ll * t * t % m);return (1ll * a * t % m);}}
bool isPowerof2(ll n){if (!(n & (n - 1))){return true;}return false;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;} 


static bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
        if (a.first == b.first)
                return a.second < b.second;

        return a.first < b.first;
}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
#endif
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        fastio();
        ll t;
        cin >> t;
        while (t--)
        {
        }

        return 0;
}
