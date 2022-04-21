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

int lcs(string x, string y, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if(dp[n - 1][m - 1] != -1) return dp[n- 1][m - 1];
    if (x[n - 1] == y[m - 1])
        return dp[n - 1][m - 1] = 1 + lcs(x, y, n - 1, m - 1);
    else
        return dp[n - 1][m - 1] = max(lcs(x, y, n - 1, m), lcs(x, y, n, m - 1));
    return -1;
}

void solve()
{
    string x, y;
    cin >> x >> y;
    int n = x.length(), m = y.length();
    int ans = lcs(x, y, n, m);
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