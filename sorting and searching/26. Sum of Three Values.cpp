// ANKAM SRIMAN
// https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";

void solve()
{
    int n;
    ll x;
    cin>>n>>x;
    vector<pair<ll,ll>>a;
    for(int i=0;i<n;i++)
    {
        ll z;cin>>z;
        a.push_back({z,i+1});
    }
    sort(a.begin(),a.end());
    int j=1,k=n-1;
    for(int i=0;i<n-2;i++)
    {
        j=i+1;k=n-1;
        while(j<k)
        {
            if(a[i].first+a[j].first+a[k].first==x)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second;
                return;
            }
            else if(a[i].first+a[j].first+a[k].first<x)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    cout<<"IMPOSSIBLE";

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
