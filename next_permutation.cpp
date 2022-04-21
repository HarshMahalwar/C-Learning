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

vector<int> ans_(vector<int>& ar)
{
    int n = ar.size(), i;
    for(int i = n - 2; i >= 0; i--)
    {
        if(ar[i] < ar[i + 1])
            break;
    }
    if(i < 0)
        reverse(ar.begin(), ar.end());
    else
        swap(ar[i], ar[i + 1]);
    return ar;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        ar.push_back(t);
    }
    vector<int> ans = ans_(ar);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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