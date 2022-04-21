#include <bits/stdc++.h>

#define ll long long int
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void heapify(int* ar, int n, int i)
{
    int lar = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    
    if (l < n && ar[l] > ar[lar])
        lar = l;
    
    if (r < n && ar[r] > ar[lar])
        lar = r;
 
    if (lar != i) {
        swap(ar[i], ar[lar]);
        heapify(ar, n, lar);
    }
}
 

void Sort_(int* ar, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(ar, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(ar[0], ar[i]);
        heapify(ar, i, 0);
    }
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
    Sort_(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
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