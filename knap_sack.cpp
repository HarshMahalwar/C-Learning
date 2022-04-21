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

class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> q;
    int k;
    KthLargest(int k, vector<int> &nums)
    {
        this -> k = k;
        for(auto it: nums)
            q.push(it);
    }

    int add(int val)
    {   
        q.push(val);
        int k1 = k;
        while(k1 != 0 && !q.empty())
        {
            q.pop();
            k--;
        }
        return q.top();
    }
};

void solve()
{
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