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

int scs(string x, string y, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // dp[n][m] is where the size of the lcs is stored.
    int i = n, j = m;
    list<char> ar;

    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            ar.push_front(x[i - 1]);
            i--, j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                ar.push_front(x[i - 1]);
                i--;
            }
            else
            {
                ar.push_front(y[j - 1]);
                j--;
            }
        }
    }

    for (auto it = ar.begin(); it != ar.end(); it++)
    {
        cout << *it;
    }

    cout << "\n";
    cout << "The lcs is " << dp[n][m] << "\n";
    return n + m - dp[n][m];
}

void solve()
{
    string x, y;
    cin >> x >> y;
    sort(x.begin(), x.end()); // it will help in keepin the test case in lexicographical order
    sort(y.begin(), y.end()); 
    int n = x.length(), m = y.length();
    int ans = scs(x, y, n, m);
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