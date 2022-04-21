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

int rob(vector<int> &nums)
{
    int n = nums.size();
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if(j >= nums[i - 1])
                a[i][j] = max(a[i - 2][j - nums[i - 1]] + nums[i - 1], a[i - 1][j]);
            else
                a[i][j] = a[i - 1][j];
        }
        
    }
    return a[n][n];
}

void solve()
{
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