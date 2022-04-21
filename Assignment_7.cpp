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

vector<int> topView(Node *root)
{
    vector<int> a;
    if(!root)
        return a;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        for(int i = 0; i < n; i++)
        {
            Node* t = q.front();
            if(i == n - 1 || i == 0)
                a.push_back(t -> data);
            q.pop();
            if(t -> left)
                q.push(t -> left);
            if(t -> right)
                q.push(t -> right);
        }
    }
    return a;
}

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