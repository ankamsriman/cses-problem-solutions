// ANKAM SRIMAN
// https://cses.fi/problemset/task/1631
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    ll s=0;
    int mx=-1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];mx=max(mx,a[i]);
    }
    sort(a.begin(),a.end());
    if(s-mx>=mx)
    {
        cout<<s;
    }
    else
    {
        cout<<2LL*mx;
    }
    cout<<"\n";

    

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
