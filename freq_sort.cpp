#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define qwe pair<int, int>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void freq_sort(int* ar, int n)
{
    unordered_map<int, int> map1;
    for (int i = 0; i < n; i++)
    {
        map1[ar[i]]++;
    }
    priority_queue<qwe> qw;
    vector<int> ar1;
    for(auto it = map1.begin(); it != map1.end(); it++)
    {
        qw.push(make_pair(it->second, it->first));
    }
    while(qw.size() > 0)
    {
        ar1.push_back(qw.top().second);
        qw.pop();
    }
    for(auto it = ar1.begin(); it != ar1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
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
    freq_sort(ar, n);
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