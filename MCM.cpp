#include <bits/stdc++.h>

#define ll long long int
#define pp pair<int, int>
#define int_ unsigned int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

// int a[1002][1002];

int_ MCM(int_ *ar, int_ l, int_ r)
{
    if (l >= r)
        return 0;
    int_ m = INT_MAX;
    for (int_ i = l; i < r; i++)
    {
        int_ t = MCM(ar, l, i) + MCM(ar, i + 1, r) + ar[i - 1] * ar[l] * ar[r];
        if (t < m)
            m = t;
    }
    return m;
}

void solve()
{
    int_ n;
    cin >> n;
    int_ ar[n];
    for (int_ i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int_ ans = MCM(ar, 0, n - 1);
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