#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll countBits(ll n)
{
    ll count = 0;
    while (n)
    {
        count++;
        n >>= 1;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}
