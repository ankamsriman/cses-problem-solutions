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
vector<ll>dp;

vector<int> dig(int n)
{
    vector<int>v;
    while(n)
    {
        v.push_back(n%10);
        n/=10;
    }
    return v;
}

ll rec(int n)
{
    if(n==0) return 0;
    
    if(dp[n]!=-1) return dp[n];

    ll ans=1e18;
    
    for(int x:dig(n))
    {
        if(n-x>=0 &&x!=0)ans=min(ans,1+rec(n-x));
    }
    return dp[n]=ans;
}

void solve() 
{
    int n;cin>>n;
    dp.resize(n+1,-1);

    cout<<rec(n);

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
