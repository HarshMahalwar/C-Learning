#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pp pair<int, int>
#define pp1 pair<double, int>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

// k closest point to origin. 

void k_closest_point(vector<pp>& ar, int k)
{
    priority_queue<pp1> qw;
    int j = 1;
    for(auto it = ar.begin(); it != ar.end(); it++)
    {
        double num1 = sqrt(it->first * it -> first + it -> second * it -> second);
        qw.push(make_pair(num1, j));
        j++;
        if(qw.size() > k)
        {
            qw.pop();
        }
    }
    while(qw.size() > 0)
    {
        cout << qw.top().first << " for the point " << ar[qw.top().second - 1].first << " " << ar[qw.top().second - 1].second << endl;
        qw.pop();
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pp> ar;
    for (int i = 0; i < n; i++)
    {
        int f, s;
        cin >> f >> s;
        ar.push_back(make_pair(f, s));
    }
    k_closest_point(ar, k);
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