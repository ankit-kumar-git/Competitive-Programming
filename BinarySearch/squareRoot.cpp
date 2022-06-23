//-------> SQUARE ROOT OF A NUMBER <-------------------------

#include <bits/stdc++.h>
using namespace std;
#define long long ll

int main()
{
    int n;
    cin >> n;
    double low = 0, high = n;
    cout << setprecision(10);
    // Here we in general run loop for 100 time which is quite enough for
    // to reach to a answer of required precesion;
    // At that precision our low and high will almost become equal, so no need of
    // another answer variable here;
    for (int i = 0; i < 100; i++)
    {
        double mid = low + (high - low) / 2;

        if (mid * mid <= n)
        {
            low = mid;
        }
        else
            high = mid;
    }

    cout << low << endl;

    return 0;
}