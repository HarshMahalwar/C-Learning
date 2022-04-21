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


// O(nlogk)
void soln(int *ar, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> qw;
    int ar1[n], j = 0;
    for (int i = 0; i < n; i++)
    {
        if(qw.size() == k)
        {   
            ar1[j] = qw.top();
            qw.pop();
            j++;
        }
        qw.push(ar[i]);
    }
    ar1[j] = qw.top();
    for (int i = k; i < n; i++)
    {
        ar1[i] = ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar1[i] << " "; 
    }
    
    cout << "\n";
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    soln(ar, n, k);
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