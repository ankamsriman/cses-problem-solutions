// ANKAM SRIMAN
// https://cses.fi/problemset/task/1634
// T=O(sum*(1+n))
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;
const int inf=1e9+5;


void solve()
{
    int n,sum;cin>>n>>sum;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>dp(sum+1,inf);
    dp[0]=0;
    for(int i=1;i<=sum;i++)
    {
        for(int x:a)
        {
            if(i-x>=0)
            {
                dp[i]=min(dp[i],dp[i-x]+1);
            }
        }
    }
    cout << (dp[sum] == inf ? -1 : dp[sum]) << "\n";
    

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
