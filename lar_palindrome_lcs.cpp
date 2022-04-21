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

int palindrome_seq(string x, string y, int n, int m)
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
                dp[i][j] = max(dp[i - 1][j], dp[i][j -1]);
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][m];
}

void solve()
{
    string x;
    cin >> x;
    int n = x.length();
    string y = x;
    reverse(x.begin(), x.end());
    cout << "The value of the reversed x is " << x << endl;
    int ans =  palindrome_seq(x, y, n, n);
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