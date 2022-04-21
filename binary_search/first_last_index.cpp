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

// O(n)
int ans_(int *ar, int n, int t)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[ar[i]]++;
    }
    return m[t];
}

// O(logn)
int last_(int *ar, int n, int t)
{
    int start = 0;
    int end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ar[mid] == t)
        {
            start = mid + 1;
            res = mid;
        }
        else if (ar[mid] < t)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return res;
}

// O(logn)
int first_(int* ar, int n , int t)
{
    int start = 0;
    int end = n - 1;
    int res = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(ar[mid] == t){
            end = mid - 1;
            res = mid;
        }
        else if(ar[mid] < t)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return res;
}

void solve()
{
    int n, t;
    cin >> n >> t;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int first = first_(ar, n, t);
    int last = last_(ar, n, t);
    cout << last - first + 1<< endl;
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