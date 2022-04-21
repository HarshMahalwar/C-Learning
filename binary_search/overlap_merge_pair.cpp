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

vector<vector<int>> ans_(vector<vector<int>>& ar)
{
    vector<vector<int>> res;
    for (int i = 0; i < ar.size(); i++)
    {
        if(res.empty() || res.back()[1] <  ar[i][0])
        {
            vector<int> v;
            v.push_back(ar[i][0]);
            v.push_back(ar[i][1]);
            res.push_back(v);
        }
        else{
            res.back()[1] = max(res.back()[1], ar[i][1]);
        }
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> ar;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        ar.push_back(v);
    }
    vector<vector<int>> ar1 = ans_(ar);
    for (int i = 0; i < ar1.size(); i++)
    {
        for (int j = 0; j < ar1[i].size(); j++)
        {
            cout << ar1[i][j] << " ";
        }
        cout << endl;
    }
    
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