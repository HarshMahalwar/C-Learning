#include <bits/stdc++.h>

#define ll long long int
#define qw priority queue<int>
#define qwd priority queue<int, vector<int>, greater<int>>
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

bool ans_(string x, string y, int n, int m)
{
    int a[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 0;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (x[i - 1] == y[j - 1])
                a[i][j] = a[i - 1][j - 1] + 1;
            else
                a[i][j] = max(a[i - 1][j], a[i][j - 1]);
        }
    }
    if(a[n][m] == n && n == m)
        return true;
    return false;
}


void solve()
{
    string x, y;
    cin >> x >> y;
    int n = x.length(), m = y.length();
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if(ans_(x, y, n, m))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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