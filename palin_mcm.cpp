#include <bits/stdc++.h>

#define ll long long int
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

bool isPalindrome(string x, int l, int r)
{
    vector<char> a, b;
    for(int i = l; i <= r; i++)
    {
        a.push_back(x[i]);
        b.push_back(x[i]);
    }
    reverse(b.begin(), b.end());
    for (int i = 0; i <= r - l / 2; i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int d[1002][1002];

int palin_string(string x, int l, int r)
{
    if(l == r)
        return 0;
    if(isPalindrome(x, l, r))
        return 0;
    if(d[l][r] != -1)
        return d[l][r];
    int m = INT_MAX;
    for(int i = l; i < r; i++)
    {
        int t = palin_string(x, l , i) + palin_string(x, i + 1, r) + 1;
        if(t < m)
            m = t;
    }
    return d[l][r] = m;
}

void solve()
{
    string x;
    cin >> x;
    int n = x.length();
    int ans = palin_string(x, 0 , n - 1);
    cout << ans << endl;
}

int main()
{
    memset(d, -1, sizeof(d));
    func
        test
    {
        solve();
    }
    return 0;
}