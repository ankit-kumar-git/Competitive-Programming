#include <bits/stdc++.h>
using namespace std;
//-------------> QUESTION <-----------------------------
// Given an array of integers (both positive and negative). Pick a subsequence of elements from it such that no 2 adjacent elements are picked and the sum of picked elements is maximized.

// A = [1, 2, 3, 4, 5]
// Picked subsequence = [1, 3, 5]

// A = [1, 4, 2, -10, 10]
// Picked Subsequence = [4, 10]

//----------->   SOLUTION <--------------------------------

// Following 4 steps;

// 1.State
// f(index)=answer till index i whether we pich ith element for our ans or not.
// f(index)=max(f(index,0),f(index,1)).
//   //f(index,0)--> means element at index not included
//   // f(index,1)--> means element at index was included

// 2.Transition
//  So, f(index)=max(arr[i]+f(index-2),f(index-1));

// 3.Base Case
// f(0)=max(0,arr[0]);

// 4.Final Subproblem
//   f(n-1)--> This is what actually we have to calculate. (n-1) means we consider answer for our entire array.

vector<int> dp(100007, -1);
int arr[100005];

// Recursion with brute force
// TC-> O(N) and SC -> O(N);
int solve(int index)
{
    if (index == 0)
        return max(0, arr[0]);

    if (index == 1)
        return max(0, max(arr[0], arr[1]));

    // Memoization
    if (dp[index] != -1)
        return dp[index];

    dp[index] = max(arr[index] + solve(index - 2), solve(index - 1));
    return dp[index];
}

// Tabulation
// TC-> O(N) and SC -> O(N);
int solve2(int n)
{
    dp[0] = max(0, arr[0]);
    dp[1] = max(0, max(arr[0], arr[1]));

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
    }

    return dp[n - 1];
}

// Tabulation with space optimization;
// TC-> O(N) and SC-> O(1)
int solve3(int n)
{
    int first = max(0, arr[0]);               // like dp[0]/dp[n-2];
    int second = max(0, max(arr[0], arr[1])); // like dp[1]/dp[n-1];
    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        ans = max(arr[i] + first, second);
        first = second;
        second = ans;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int ans = solve(n-1);   // Recursion with memoization
    // cout << ans << endl;

    int ans2 = solve2(n); // Tabulation
    cout << ans2 << endl;

    // With space optimization;
    // We require only previous 2 states to calculate my current state
    // i.e. for dp[i], we require dp[i-1] && dp[i-2];
    // So we will store them in 2 variable and not in array;
    int ans3 = solve3(n);
    cout << ans3 << endl;

    return 0;
}