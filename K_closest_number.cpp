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

// so basically we have to find the numbers which are closest to the key value.
void soln(int *ar, int n, int k, int key)
{
    priority_queue<pair<int, int>> qw;
    for (int i = 0; i < n; i++)
    {
        qw.push(make_pair(abs(ar[i] - key), ar[i])); // log(n)
        if (qw.size() == k)
            qw.pop();
    }
    while (qw.size() > 0)
    {
        cout << qw.top().second << " ";

        qw.pop();
    }
}

void solve()
{
    int n, k, key;
    cin >> n >> k >> key;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    soln(ar, n, k + 1, key);
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