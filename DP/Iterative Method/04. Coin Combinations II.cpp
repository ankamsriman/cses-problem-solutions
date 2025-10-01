// ANKAM SRIMAN
// https://cses.fi/problemset/task/1636

/*
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.
For example, if the coins are \{2,3,5\} and the desired sum is 9, there are 3 ways:

2+2+5
3+3+3
2+2+2+3
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;


// dp[s]->no of ways to get the sum=s from c[0:l]
// for all l: dp[s]=dp[s]+dp[s-a[l]]


void solve() 
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int &z : c) cin >> z;

    vector<ll> dp(x+1,0);
    dp[0]= 1;

    for (int l = 0; l < n; l++) 
    {
        for (int s = 0; s <= x; s++) 
        {
            if(s-c[l]>=0)
            {
                dp[s]=(dp[s]+dp[s-c[l]])%mod;
            }
        }
    }

    cout << dp[x] << "\n";
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
