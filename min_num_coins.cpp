#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mn INT_MAX
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

int coin_prob(int *ar, int sum, int n)
{
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                dp[i][j] = mn - 1;
            if (j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1, j = 1; j < sum + 1; j++)
    {
        if (j % ar[0] == 0)
        {
            int num = j / ar[0];
            dp[i][j] = num;
        }
        else
            dp[i][j] = mn - 1;
    }

    for (int i = 2; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (j >= ar[i - 1])
                dp[i][j] = min(dp[i][j - ar[i - 1]] + 1, dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
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
    int ans = coin_prob(ar, sum, n);
    cout << ans << "\n";
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