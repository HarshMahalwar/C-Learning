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

bool sub_set(int* ar, int n, int sum)
{
    bool dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)   
        {
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }
    
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if(j >= ar[i - 1]) dp[i][j] = dp[i - 1][j - ar[i - 1]] || dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j];
        }
    }
    
    return dp[n][sum];
}

void solve()
{
    int n;
    cin >> n;
    int ar[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    if(sum % 2 != 0) cout << "False" << endl;
    else 
        if(sub_set(ar, n, sum / 2))
            cout << "True" << endl;
        else 
            cout << "False" << endl;
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