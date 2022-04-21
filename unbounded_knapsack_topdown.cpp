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

int un_knapsack(int *wght, int *cost, int w, int n)
{
    int dp[n + 1][w + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (j >= wght[i - 1])
                dp[i][j] = max(cost[i - 1] + dp[i][j - wght[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][w];
}

void solve()
{
    int n, w;
    cin >> n >> w;
    int wght[n - 1], cost[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> wght[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int ans = un_knapsack(wght, cost, w, n);
    cout << ans;
}

int main()
{
    func
        test
    {
        solve();
    }
    return 0;
}