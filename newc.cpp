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

void solve()
{
    int n, k ,x;
    cin >> n >> k >> x;
    if(k < x)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ar;
    int i = 0;
    while(ar.size() != k)
    {
        if(i != x)
            ar.push_back(i);
        i++;
    }
    int j = 0, l = 0;
    while(j != n){
        if(l == k)
            l = 0;
        cout << ar[l] << " ";
        l++;j++;
    }
    cout << endl;
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