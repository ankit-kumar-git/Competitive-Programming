// -------------> QUESTION <----------------------------------
// The game starts with a number ‘n’ and Alice and Bob make moves alternatively with Alice going first. If the current number is ‘k’, the player, whose turn it is, can convert k to {k-1, k-2, k-3}. If the current number is a Prime, the player cannot make a move and thus loses. Determine who will win if they both play optimally.
// 2 <= n <= 106
// Examples:
// N = 6 -  Alice wins as she can subtract 1 from 6 and convert it 5 (a Prime)
// N = 27 - No, matter what Alice converts 27 to {26, 25, 24}, Bob can convert the next number to 23 (a Prime)and win.

// ---------------->   SOLUTION <-------------------------------------

// STATE
// dp[n] ->1, if it is a winning state and 0,if it is losing state;

// TRANSITION
// dp[n]=1 if either dp[n-1],dp[n-2] or dp[n-3] is a losing state.
// dp[n]=0 if all 3 states -> dp[n-1],dp[n-2] and dp[n-2] are a winning state.

// BASE CASE
// dp[prime]=0;

// FINAL SUBPROBLEM
// dp[n]