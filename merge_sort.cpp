#include <bits/stdc++.h>

#define ll long long int
#define qw priority_queue<int>
#define qwd priority_queue<int, vector<int>, greater<int>>
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test   \
    int t = 1; \
    while (t--)

using namespace std;

class contributor
{
public:
    string name;
    vector<pair<string, int>> skill;
};

void solve()
{
    int num_of_contributors, num_of_projects;
    cin >> num_of_contributors >> num_of_projects;
    for (int i = 0; i < num_of_contributors; i++)
    {
        string name;
        int num_of_skills;
        cin >> name >> num_of_skills;
        for (int j = 0; j < num_of_skills; j++)
        {
        }
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