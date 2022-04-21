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



bool sum_subset(int* ar1, int n , int sum)
{
    bool ar[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++) 
        {
            if(i == 0) ar[i][j] = false;
            if(j == 0) ar[i][j] = true;
        }
        
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if(j >= ar1[i - 1])
                ar[i][j] = ar[i - 1][j - ar1[i - 1]] || ar[i - 1][j];
            else   
                ar[i][j] = ar[i - 1][j];
        }
    }
    if(ar[n][sum] == true)
        return true;
    else 
        return false;
}

void solve()
{
    int n, sum;
    cin >> n >> sum;
    int ar1[n];
    // inin(n, sum);
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }
    if(!sum_subset(ar1, n, sum))
        cout << "true" << endl;
    else 
        cout << "false" << endl;
}

int main()
{
    // memset(ar, -1, sizeof(ar));
    func
        test
    {
        solve();
    }
    return 0;
}