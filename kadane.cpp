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

int maxsum(int *ar, int n)
{
    int sum = 0, m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        if (sum > m)
            m = sum;
        if (sum < 0)
            sum = 0;
    }
    return sum;
}

bool subArrayExists(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0) 
            return true;
        if(sum < 0)
            sum = 0;
    }
    return false;
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
    int ans = maxsum(ar, n);
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