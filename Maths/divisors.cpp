//************* DIVISORS****************

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll divisors(ll n)
{
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++; // Since i is a divisor of n;

            if (i != (n / i))
            {
                cnt++; // since (n/i) is also a divisor but n should not be a perfect square.
            }
        }
    }
    return cnt;
}

vector<int> getDivisors(ll n)
{
    vector<int> div(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            div[j]++;
        }
    }
    return div;
}

int main()
{

    //*** Counting no of divisors of a number in sqrt(n) time;
    cout << divisors(18) << endl;

    //*** Suppose we want to find divisors for all number from 1 to n;
    //  So n times divisors() func will be called.
    // So time complexity: close to (n*sqrt(n)), which is not good.

    // So to do so  we will iterate over multiples till n;Here itertions are not wasted.
    // Time complexity here is O(nlogn) << O(nsqrt(n));    // For proof refer Utkarsh gupta video ->https://www.youtube.com/watch?v=tDM6lT-qjys
    ll n = 100;
    vector<int> v = getDivisors(n);
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}