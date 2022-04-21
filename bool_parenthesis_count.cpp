#include <bits/stdc++.h>

#define ll long long int
#define qw priority_queue<int>
#define qwd priority_queue<int, vector<int>, greater<int>>
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int mod = 1003;
int a[204][204][2];

int ans_(string x, int l, int r, int t)
{
    if (l > r)
        return 0;
    if (l == r)
    {
        if (t == 1)
            return x[l] == 'T';
        else
            return x[l] == 'F';
    }
    if (a[l][r][t] != -1)
        return a[l][r][t];
    int ans = 0, rt, rf, lt, lf;
    for (int i = l + 1; i < r; i++)
    {
        if (a[l][i - 1][0] != -1)
            lf = a[l][i - 1][0];
        else
            lf = ans_(x, l, i - 1, 0);
        if (a[l][i - 1][1] != -1)
            lt = a[l][i - 1][1];
        else
            lt = ans_(x, l, i - 1, 1);
        if (a[i + 1][r][0] != -1)
            rf = a[i + 1][r][0];
        else
            rf = ans_(x, i + 1, r, 0);
        if (a[i + 1][r][1] != -1)
            rt = a[i + 1][r][1];
        else
            rt = ans_(x, i + 1, r, 1);
        if (x[i] == '&')
        {
            if (t == 1)
                ans = ans + rt * lt;
            else
                ans = ans + rt * lf + rf * lt + rf * lf;
        }
        else if (x[i] == '|')
        {
            if (t == 1)
                ans = ans + rt * lf + rf * lt + rt * lt;
            else
                ans = ans + rf * lf;
        }
        else if (x[i] == '^')
        {
            if (t == 1)
                ans = ans + rt * lf + lt * rf;
            else
                ans = ans + rt * lt + rf * lf;
        }
    }
    return a[l][r][t] = ans % mod;
}

int countWays(int n, string S)
{
    memset(a, -1, sizeof(a));
    int ans = ans_(S, 0, n - 1, true);
    return ans;
}

void solve()
{
    string x;
    cin >> x;
    int n = x.length();
    int ans = countWays(n, x);
    cout << ans << endl;
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