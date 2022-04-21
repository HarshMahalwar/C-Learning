#include <bits/stdc++.h>
#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

int dp[1002][1002];

int unbounded_knapsack(int *len, int *cost, int w, int n)
{
    if (w == 0 || n == 0)
        return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if (w < len[n - 1])
        return dp[n][w] = unbounded_knapsack(len ,cost ,w, n - 1);
    else 
        return dp[n][w] = max(cost[n - 1] + unbounded_knapsack(len ,cost, w - len[n - 1], n), unbounded_knapsack(len ,cost, w, n - 1));
}

void solve()
{
    int n, w;
    cin >> n >> w;
    int len[n], cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> len[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int ans = unbounded_knapsack(len, cost, w, n);
    cout << ans << endl;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    func
        test
    {
        solve();
    }
    return 0;
}