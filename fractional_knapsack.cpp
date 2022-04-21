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

long long countTriplets(long long arr[], int n, long long sum)
{
    long long count = 0;
    sort(arr, arr + n);
    // -2, 0, 1, 3, 3
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while(l < r){
            int ans = arr[i] + arr[l] + arr[r];
            if(ans < sum){
                count+= (r -l); 
                l++;
            }
            else
                r--;
        }
    }
    return count;
}

int ans_(long long* ar, long long n, long long sum)
{
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if(ar[i] + ar[j] + ar[k] < sum)
                    count++;
            }
            
        }
        
    }
    return count;
}

void solve()
{
    int n;
    long long sum;
    cin >> n >> sum;
    long long ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long num = countTriplets(ar, n, sum);
    int ans = ans_(ar, n, sum);
    cout << num << endl << ans << endl;
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