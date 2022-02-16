#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll m = 1e9 + 7;
const ll N = 1e5 + 5;
ll fact[N], invFact[N];

ll aPb(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        ll t = aPb(a, (b / 2), m);
        return (1ll * t * t % m);
    }
    else
    {
        ll t = aPb(a, ((b - 1) / 2), m);
        t = (1ll * t * t % m);
        return (1ll * a * t % m);
    }
}
void init()
{
    fact[0] = 1;
    ll i;
    for (i = 1; i <= N; i++)
    {
        fact[i] = (i % m * fact[i - 1] % m) % m;
    }
    i--;
    invFact[i] = aPb(fact[i], m - 2, m);
    for (i--; i >= 0; i--)
    {
        invFact[i] = (invFact[i + 1] % m * (i + 1) % m) % m;
    }
}

ll nCr(ll n, ll r)
{
    if (r < 0 || r > n || n < 0)
        return 0;

    init();
    return fact[n] * invFact[r] % m * invFact[n - r] % m;
}

int main()
{
    ll n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;

    return 0;
}