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

int lcs_superseq(string x, string y, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
        }
        
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if(x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i][j - 1],dp[i - 1][j]);
        }
    }
    int an = n - dp[n][m]; // deletion
    int bn = m - dp[n][m]; // insertion
    return an + bn;
}

void solve()
{
    string x, y;
    cin >> x >> y;
    int n = x.length(), m = y.length();
    int ans = lcs_superseq(x, y, n, m);
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