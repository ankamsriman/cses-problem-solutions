// ANKAM SRIMAN
// https://cses.fi/problemset/task/1634
// T=O(sum*(1+n))
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;
const int inf=1e9;

vector<int>coins;
vector<int>dp;

// dp[sum]->min no of coins with sum=sum
// for all : dp[sum]=min(1+d[sum-a[i]])
ll rec(int sum) {
    if (sum == 0) return 0;           // base case
    if (dp[sum] != -1) return dp[sum];

    ll ans = inf;
    for (int c : coins) {
        if (sum - c >= 0) {
            ans = min(ans, 1 + rec(sum - c));
        }
    }
    return dp[sum] = ans;
}

void solve() {
    int n, x;
    cin >> n >> x;
    coins.resize(n);
    for (int &c : coins) cin >> c;

    dp.assign(x + 1, -1);
    ll ans = rec(x);

    cout << (ans >= inf ? -1 : ans) << "\n";
}


signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;
    int t = 1;
    // cin >> t;
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
