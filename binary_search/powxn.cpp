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

// // O(n)
// int pow_(int x, int n)
// {
//     int ans = 1;
//     for (int i = 0; i < n; i++)
//     {
//         ans *= x;
//     }
//     return ans;
// }

// O(log n)
double pow_(int x, int n)
{
    double ans = 1;
    int n1 = n; 
    if(n1 < 0)
        n1 = (-1) * n1;
    while(n1 != 0){
        if(n1 % 2 == 1)
        {
            ans *= x;
            n1 -= 1;
        }
        else{
            x *= x;
            n1 /= 2;
        }
    }
    if(n < 0)
        ans = (double)(1) / (double)(ans);
    return ans;
}

void solve()
{
    int x, n;
    cin >> x >> n;
    // int ans = pow(x, n); O(log n)
    double ans = pow_(x, n);
    cout << ans << endl;
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