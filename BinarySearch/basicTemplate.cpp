//------------> BASIC TEMPLATE FOR BINARY SEARCH PROBLEMS ------------------>

// Below is a program structure to that finds smallest number greater than 10 ;

#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{ // PREDICATE FUNCTION
    return x > 10;
}
int main()
{
    int n;
    cin >> n;
    int l = 0, h = n - 1, ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (check(mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;

    return 0;
}