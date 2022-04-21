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

bool eq(string x, string y)
{
    if (x == y)
        return true;
    return false;
}

bool ans_(string x, string y)
{
    int n = x.length();
    if (x.length() != y.length())
        return false;
    if (x.length() == 0)
        return false;
    if (x == y)
        return true;
    string x1 = x, y1 = y;
    sort(x1.begin(), x1.end());
    sort(y1.begin(), y1.end());
    if (x1 != y1)
        return false;
    for (int i = 0; i < n - 1; i++)
    {
        if (eq(x.substr(0, i), y.substr(n - i, i)) && eq(x.substr(i, n- i), y.substr(0, n -i)))
            return true;
        if (eq(x.substr(0 ,i), y.substr(0, i)) && eq(x.substr(i, n- i), y.substr(i, n-i)))
            return true;
    }
    // no condition is satisfied 
    return false;
}


void solve()
{
    string x, y;
    cin >> x >> y;
    if (ans_(x, y))
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