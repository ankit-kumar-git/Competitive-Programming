//***** Binary Exponentiation******
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// *** Finding (a^b) % m
// O(log b) time
int aPb(int a, int b, int m)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        int t = aPb(a, (b / 2), m);
        return (1ll * t * t % m);
    }
    else
    {
        int t = aPb(a, ((b - 1) / 2), m);
        t = (1ll * t * t % m);
        return (1ll * a * t % m);
    }
}

// For just finding  (a^b) for large number
long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main()
{

    ll a, b, m;
    cin >> a >> b >> m;
    cout << aPb(a, b, m) << endl;
    cout << binpow(a, b) << endl;
    return 0;
}