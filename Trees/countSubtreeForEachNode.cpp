// Question is to count the number of subtrees of each node.While counting
// that node for which we are calculating must also be counted.

//---------------->Solution<------------------------------------------
//** Approach 1. Dp dfs() for each of the node and count . O(V^2)(Brute force).

//** Approach 2. Dynamic Programming on subtrees. Modifications while dfs()
//  e.g. if 7, 8 ,9 are the children of node 6,then,
// dp[6]=1+(dp[7]+dp[8]+dp[9]);
// dp[i]--> represent cnt of subtrees of ith node.

// Code Implementation
#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int dp[N + 1];
vector<vector<int>> adj(N + 1, vector<int>());
bool visited[N + 1];
void dfs(int node, int parent)
{
    dp[node] = 1;
    visited[node] = 1;

    for (auto &child : adj[node])
    {
        if (child == parent)
            continue;

        if (!visited[child])
        {
            dfs(child, node);
        }

        dp[node] += dp[child];
    }
}

int main()
{
    return 0;
}
