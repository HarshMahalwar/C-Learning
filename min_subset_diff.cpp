#include <bits/stdc++.h>

#define ll long long int
#define deez                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;
// sum over here is the max sum.
int min_sub_diff(int *ar, int n, int sum)
{
    bool dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (j >= ar[i - 1])
                dp[i][j] = dp[i - 1][j - ar[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    vector<int> ar1;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (dp[i][j])
                ar1.push_back(j);
        }
    }
    int mn = INT_MAX, rn, count = 0;
    for (int j = 0; j < sum + 1; j++)
    {
        mn = min(mn, abs(sum - 2 * ar1[j]));
        rn = abs(sum - 2 * ar1[j]);
        if (rn == mn)
        {
            count++;
        }
        else
        {
            rn = mn;
            count = 1;
        }
    }
    return count;
}



void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    int ans = missingNumber(arr, n);
    cout << ans << endl;
    // int n;
    // cin >> n;
    // int ar[n], sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    //     sum += ar[i];
    // }
    // int ans = min_sub_diff(ar, n, sum);
    // cout << ans << endl;
}

int main()
{
    deez
        test
    {
        solve();
    }
    return 0;
}