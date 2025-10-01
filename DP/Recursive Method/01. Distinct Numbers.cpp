// ANKAM SRIMAN
// https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;

int a[]={1,2,3,4,5,6};
ll dp[1000100];

// dp[n]+=dp[n-i]
ll rec(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    ll ans=0;
    for(int x:a)
    {
        if(n-x>=0)
        {
            ans=(ans+rec(n-x))%mod;
        }
    }
    return dp[n]=ans;

}
void solve()
{
    int n;cin>>n;
    memset(dp,-1,sizeof(dp));
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
