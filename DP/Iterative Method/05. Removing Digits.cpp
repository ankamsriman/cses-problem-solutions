// ANKAM SRIMAN
// https://cses.fi/problemset/task/1637

/*
You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?
27 -> 20 -> 18 -> 10 -> 9 -> 0.
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;

// dp[n]: number of steps to make n =0
// n=abc: dp[n]=min(dp[abc-a],dp[abc-b],dp[abc-c])
// T=O(n),Space=O(n)


void solve() 
{
    int n;cin>>n;
    vector<ll>dp(n+1,1e18);
    
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int x = i;
        while (x) {
            int d = x % 10;
            if (d != 0)
                dp[i] = min(dp[i], 1 + dp[i - d]);
            x /= 10;
        }
    }
    cout<<dp[n];

    

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
