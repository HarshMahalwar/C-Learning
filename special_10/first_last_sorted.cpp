#include <bits/stdc++.h>

#define ll long long int
#define qw priority queue<int>
#define qwd priority queue<int, vector<int>, greater<int>>
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
void ans_(int* ar, int n, int t)
{
    int itr = INT_MAX, count = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i] == t)
        {
            if(itr > i)
                itr = i;
            count++;
        }
    }
    cout << itr << " " << count + itr - 1;
}
// binary_search

int binary_search0(int* ar, int val, int l, int r)
{
    if(l < r){
        int mid = (l + r) / 2;
        if(ar[mid] == val && ar[mid - 1] < val)
            return mid;
        else if(ar[mid] < val)
            return binary_search0(ar, val, mid + 1, r);
        else
            return binary_search0(ar, val, l, mid);
    }
    return -1;
}

int binary_search1(int* ar, int val, int l, int r)
{
    if(l < r){
        int mid = (l + r) / 2;
        if(ar[mid] == val && ar[mid + 1] > val)
            return mid;
        else if(ar[mid] > val)
            return binary_search1(ar, val, l, mid);
        else
            return binary_search1(ar, val, mid + 1, r);
    }
    return -1;
}
// O(logn)
void ans(int* ar, int n, int t)
{
    int left = binary_search0(ar, t, 0, n);
    int right = binary_search1(ar,t, 0, n);
    cout << left << " " << right;
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
    ans(ar, n, t);
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