// ANKAM SRIMAN
// https://cses.fi/problemset/task/1713/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;cin>>n;
    int ans=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans++;
            if(i*i!=n)
            {
                ans++;
            }

        }
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
    cin >> t;
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;
        solve();
    }
    return 0;
}
