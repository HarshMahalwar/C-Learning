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

bool ans(vector<vector<int>>& ar, int t)
{
    if(!ar.size())
        return false;
    int l = 0, r = ar.size() * ar[0].size() - 1;
    while(l <= r)
    {
        int mid = l - (l - r) / 2;
        if(ar[mid / ar[0].size()][mid % ar[0].size()] == t)
            return true;
        else if(ar[mid / ar[0].size()][mid % ar[0].size()] < t)
            l = mid + 1;
        else 
            r = mid - 1;
    }
    return false;
}

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<vector<int>> ar;
    for (int i = 0; i < n; i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
        ar.push_back(a);
    }
    if(!ans(ar, t))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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