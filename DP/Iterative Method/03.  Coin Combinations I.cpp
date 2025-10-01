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



//dp[x]->no of ways to get the sum=x
// for all i: dp[x]+=dp[x-a[i]]


void solve() 
{
    int n,x;cin>>n>>x;
    vector<int>a(n);
    vector<ll>dp(x+1);
    for(int &z:a)cin>>z;
    dp[0]=1;
    
    for(int i=0;i<=x;i++)
    {
        for(int& z:a)
        {
            if(i-z>=0) dp[i]=(dp[i]+dp[i-z])%mod;
        }
    }
    cout<<dp[x];


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
