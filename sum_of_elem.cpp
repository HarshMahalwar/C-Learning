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

int sum_of_ele(int *ar, int n, int k1, int k2)
{
    int sum = 0;
    priority_queue<int> qw;
    for (int i = 0; i < n; i++)
        qw.push(ar[i]);
    vector<int> ar1;    
    while(qw.size() != k1)
    {
        if(qw.size() < k2)
        {
            sum += qw.top();   
        }
        qw.pop();
    }
    return sum;
}

void solve()
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = sum_of_ele(ar, n, k1, k2);
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