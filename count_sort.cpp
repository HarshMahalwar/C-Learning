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

void ans_(int* ar, int n)
{
    int m = INT_MIN;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if(m < ar[i])
            m = ar[i];
        mp[ar[i]]++;
    }
    m++;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = mp[i];
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[i];
        a[i] = sum;
    }
    int temp = a[0];
    for(int i = 1; i < m; i++)
    {
        int t = a[i];
        a[i] = temp;
        temp = t;
    }
    a[0] = 0;
    int ans1[n];
    for (int i = 0; i < m - 1; i++)
    {
        ans1[a[i]] = i;
        if(a[i] != a[i + 1])
        {
            int diff = a[i + 1] - a[i], rn = a[i] + 1;
            for (int j = 1; j < diff; j++)
            {
                ans1[rn] = i;
                rn++;
            }
        }
    }
    ans1[n - 1]++;
    for (int i = 0; i < n; i++)
    {
        cout << ans1[i] << " ";
    }
    
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
    ans_(ar, n);
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