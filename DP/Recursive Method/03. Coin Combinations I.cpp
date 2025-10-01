// ANKAM SRIMAN
// https://cses.fi/problemset/task/1635

/*
Consider a money system consisting of n coins. Each coin has a positive integer value. 
Your task is to calculate the number of distinct ways you can produce a money sum x 
using the available coins.
For example, if the coins are \{2,3,5\} and the desired sum is 9, there are 8 ways:

2+2+5, 2+5+2, 5+2+2, 3+3+3,2+2+2+3,2+2+3+2,2+3+2+2,3+2+2+2
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";
const int mod=1e9+7;

vector<int>a;
vector<ll>dp;

//dp[x]->no of ways to get the sum=x
// for all i: dp[x]+=dp[x-a[i]]
ll rec(int x)
{
    if(x==0)
    {
        return 1;
    }
    if(dp[x]!=-1) return dp[x];

    ll ans=0;
    for(int i=0;i<(int)a.size();i++)
    {
        if(x-a[i]>=0)
        {
            ans=(ans+rec(x-a[i]))%mod;
        }
    }
    return dp[x]=ans;

}

void solve() 
{
    int n,x;cin>>n>>x;
    a.resize(n);
    for(int &z:a)cin>>z;
    dp.assign(x+1,-1);
    
    cout<<rec(x);


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
