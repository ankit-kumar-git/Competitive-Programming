
// *********** PRIME NUMBERS ******************

#include <bits/stdc++.h>
using namespace std;
#define ll long long

//*** O(nlog(logn)) ***
vector<ll> findPrimes(ll n)
{
    vector<int> prime(n + 1, 1); // All are considered prime initially
    prime[1] = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
            continue;
        else
        {
            for (ll j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    vector<ll> ans;
    for (ll i = 1; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    //********Seive of Eratosthenes*********
    // Here basically we mark all all the multiples of prime no as not prime.
    // Here we want to find all primes between b/w 1 to n;
    ll n = 100;
    vector<ll> v = findPrimes(n);
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}