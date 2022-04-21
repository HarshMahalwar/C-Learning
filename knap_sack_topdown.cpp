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

int ar[1002][1002];

void inin(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
                ar[i][j] = 0;
        }
    }
}

int knap_sack(int W, int *wght, int *cost, int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (j >= wght[i - 1])
                ar[i][j] = max(cost[i - 1] + ar[i - 1][j - wght[i - 1]], ar[i - 1][j]);
            else
                ar[i][j] = ar[i - 1][j];
        }
    }
    return ar[n][W];
}

void solve()
{
    int n, W;
    cin >> n >> W;
    int wght[n], cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wght[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    inin(n);
    int ans = knap_sack(W, wght, cost, n);
    cout << ans << endl;
}

int main()
{
    memset(ar, -1, sizeof(ar));
    func
        test
    {
        solve();
    }
    return 0;
}

// int knap_sack(int w, int wght[], int cost[], int n)
// {
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < w + 1; j++)
//         {
//             if (w >= wght[i - 1])
//                 ar[i][j] = max(ar[i - 1][j - wght[i - 1]] + cost[i - 1], ar[i - 1][j]);
//             else
//                 ar[i][j] = ar[i - 1][j];
//         }
//     }
// }