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

long long minCost(long long* ar, long n)
{
    priority_queue<long long, vector<long long>, greater<long long>> qw;
    for (long long i = 0; i < n; i++)
    {
        qw.push(ar[i]);
    }
    long long cost = 0, sum = 0;
    cout << "first" << endl;
    while(qw.size() != 1)
    {
        long long firstvar = qw.top();
        qw.pop();
        long long secondvar = qw.top();
        qw.pop();
        cost = firstvar + secondvar; 
        sum += cost;
        qw.push(cost);
    }
    cout << "second cost" << endl;
    return sum;
}

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = min_cost_rope(ar, n);
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