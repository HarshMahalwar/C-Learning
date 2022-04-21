#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define ppi pair<pair<int, int>, int>

using namespace std;

int heaps__(int* ar, int n, int k)
{  
    priority_queue<int, vector<int>, greater<int>> mnh;
    for (int i = 0; i < n; i++)
    {
        mnh.push(ar[i]);
        if(mnh.size() == k)
            mnh.pop();
    }
    while(mnh.size() > 0)
    {
        cout << mnh.top() << " ";
        mnh.pop();
    }
    return -1;
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
    int ans = heaps__(ar, n, k + 1);
    cout << "Function has ended." << endl;
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