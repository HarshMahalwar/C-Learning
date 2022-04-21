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

//    1
//   1 1
//  1 2 1

vector<vector<int>> ans_(int n){
    vector<vector<int>> ar(n);
    for (int i = 0; i < n; i++)
    {
        ar[i].resize(i + 1);
        ar[i][0] = 1;
        ar[i][i] = 1;
        for (int j = 1; j < i; j++)
        {   
            ar[i][j] = ar[i - 1][j] + ar[i - 1][j - 1];
        }
    }
    return ar;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> ar = ans_(n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < ar[i].size(); j++)
        {
            cout << ar[i][j] << " ";
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