//******* Finding  (a/b)%m ***********
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

int div_mod(int a, int b, int m)
{
    a = a % m;
    int inverse_of_b = aPb(b, m - 2, m); // Fermat Theorem
    return (a * inverse_of_b) % m;
}
int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    cout << div_mod(a, b, m) << endl;
    return 0;
}
