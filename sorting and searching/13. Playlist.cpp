// ANKAM SRIMAN
// https://cses.fi/problemset/task/1141/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    int n;cin>>n;
    vector<int>a(n);for(int i=0;i<n;i++)cin>>a[i];

    map<int,int>mp;
    int ans=0,left=0;
    for(int i=0;i<n;i++)
    {
        if(mp.count(a[i])&&mp[a[i]]>=left)
        {
            left=mp[a[i]]+1;
        }
        mp[a[i]]=i;
        ans=max(ans,i-left+1);
    }
    cout<<ans<<"\n";

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
