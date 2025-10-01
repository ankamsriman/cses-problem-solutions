// ANKAM SRIMAN
// https://cses.fi/problemset/task/1634
// T=O(sum*(1+n))
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;

vector<int>a;
ll dp[1000100];
// dp[sum]->min no of coins with sum=sum
// for all : dp[sum]=min(1+d[sum-a[i]])
ll rec(int sum)
{
    if(sum==0)
    {
        return 0;
    }
    if(dp[sum]!=-1) return dp[sum];
    ll ans=1e18;

    for(int x:a)
    {
        if(sum-x>=0)
        {
            ans=min(ans,1+rec(sum-x));
        }
    }
    return dp[sum]=ans;

}
void solve()
{
    int n,sum;cin>>n>>sum;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    memset(dp,-1,sizeof(dp));
    ll ans=rec(sum);
    if(ans==1e18) cout<<"-1";
    else cout<<ans;
    

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
