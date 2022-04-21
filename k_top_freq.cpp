#include <bits/stdc++.h>

#define ll long long int
#define ppi pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void K_freq(int* ar, int n, int k)
{
    unordered_map<int, int> frq;
    for (int i = 0; i < n; i++)
        frq[ar[i]]++;
    priority_queue<ppi> qw;
    for(auto it = frq.begin(); it != frq.end(); ++it)
    {
        qw.push(make_pair(it->first, it->second));
        if(qw.size() > k)
            qw.pop();
    }

    while(qw.size() > 0)
    {
        cout << qw.top().second << " " << qw.top().first;
        cout << "\n";
        qw.pop();
    }
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
    K_freq(ar, n, k);
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