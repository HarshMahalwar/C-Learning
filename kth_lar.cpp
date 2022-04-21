#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ppi pair<pair<int, int>, int>;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

int heapers(int* ar, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push(ar[i]);
        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}

void solve()
{
    int n, k;
    cin >> n >> k;  
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = heapers(ar, n, k - 1);
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
