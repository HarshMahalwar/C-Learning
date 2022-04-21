#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MAXN 1000001
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void dist(vector<pair<pair<int, int>, int>> &ar, int start, int end)
{
    int n = ar.size();
    int d[n] = {MAXN};
    vector<pair<int, int>> vis;
    int i =  0;
    while(vis.size() < n)
    {
        int u = min(d[i], ar[i].second);
        vis.push_back(make_pair(ar[i].first.second, u));
        for (int j = 0; j < n; j++)
        {
            if(d[j] > u + vis[i].second)
                d[j] = u + vis[i].second;
        }
        i++;
    }
    cout << ar[0].first.first << " to " << ar[ar.size() - 1].first.second << " dist: " << vis[3].second << endl;
}


// void dist(vector<pair<pair<int, int>, int>> &ar, int start, int end)
// {
//     int n = ar.size();
//     int d[n] = {MAXN};
//     d[start] = 0;
//     set<int> s;
//     int i = 0;
//     while(s.size() < n)
//     {
//         int u = min(ar[i].second, d[n]);
//         s.insert(u);
//         for (int j = 0; j < n; j++)
//         {
//             if(d[j] > d[u] + ar[j].second)
//             {
//                 d[j] = d[u] + ar[j].second;
//             }
//         }
//         i++;
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << ar[i].first.first << " to " << ar[i].first.second << " dist: " << d[i] << endl;
//     }
    
// }

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> ar;
    for (int i = 0; i < n; i++)
    {
        int st, en, d;
        cin >> st >> en >> d;
        ar.push_back(make_pair(make_pair(st, en), d));
    }
    dist(ar, ar[0].first.first, ar[n - 1].first.second);
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