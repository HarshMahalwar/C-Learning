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

int a[1001][1001];

int ans_(int i, int j, int n, int m)
{
    if (a[i][j] != -1)
        return a[i][j];
    else if (i == n - 1 && j == m - 1)  
        return 1;
    else if (i >= n || j >= m)
        return 0;
    else
        return a[i][j] = ans_(i + 1, j, n, m) + ans_(i, j + 1, n, m);
}
// (M * N)
void solve()
{
    memset(a, -1, sizeof(a));
    int n, m;
    cin >> n >> m;
    int ans = ans_(0, 0, n, m);
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