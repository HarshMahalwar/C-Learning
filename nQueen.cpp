#include <bits/stdc++.h>

#define ll long long int
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

bool safe_(int **ar, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (ar[i][col] == 1)
            return false;
    }
    int x = row, y = col;
    while (x > 0 && y > 0)
    {
        if(ar[x][y] == 1)
            return false;
        x--; y--;
    }
    while (x < 0 && y < 0)
    {
        if(ar[x][y] == 1)
            return false;
        x--; y++;
    }
    return true;
}

bool nQueen(int **ar, int count, int n)
{
    if (count == n)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (safe_(ar, count, i))
        {
            ar[count][i] = 1;
            if(nQueen(ar, count + 1, n))
                return true;
            ar[count][i] = 0; // backtracking
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    int **ar = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = 0;
        }
    }
    if(nQueen(ar, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ar[i][j] << " ";
            }
            cout << endl;   
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