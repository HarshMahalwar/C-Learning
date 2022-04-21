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

// int coin_ways(int *ar, int sum, int n)
// {
//     if (sum == 0)
//         return 1;
//     if (n == 0)
//         return 0;
//     if (sum >= ar[n - 1])
//         return coin_ways(ar, sum - ar[n - 1], n) + coin_ways(ar, sum, n - 1);
//     else
//         return coin_ways(ar, sum, n - 1);
// }

int coin_top(int *ar, int n, int sum)
{
    int dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                dp[i][j] = 0;
            if (j == 0)
                dp[i][j] = 1;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (j >= ar[i - 1])
                dp[i][j] = dp[i][j - ar[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][sum];
}

void solve()
{
    int n, sum;
    cin >> n >> sum;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = coin_top(ar, n, sum);
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