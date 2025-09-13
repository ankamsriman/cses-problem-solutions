// ANKAM SRIMAN
// https://cses.fi/problemset/task/1630
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

void solve()
{
    int n;cin>>n;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    ll ans=0,s=0;
    for(int i=0;i<n;i++)
    {
        s+=p[i].first;
        ans+=p[i].second-s;
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
