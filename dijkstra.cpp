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

int return_min_path(vector<pair<pair<int, int>, int>>& ar)
{
    int n = ar.size();
    int d[n];
    memset(ar, INT_MAX, sizeof(d));
    d[0] = 0;
    for(int i = 0; i < n; i++) {
        if()
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> ar;
    for (int i = 0; i < n; i++)
    {
        int s, e, d;
        cin >> s >> e >> d;
        ar.push_back(make_pair(make_pair(s, e), d));
    }
    return_min_path(ar);
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