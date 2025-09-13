// ANKAM SRIMAN
// https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(long long int mid,int t,vector<long long int>& a)
{
    long long int p=0;
    for(int i=0;i<(int)a.size();i++)
    {   
        p+=mid/a[i];
    }
    return p>=t;
}

void solve()
{
    int n,t;cin>>n>>t;
    vector<long long int>a(n);
    long long int lo=0,hi=1e18,ans=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hi=min(hi,a[i]);
    }
    hi=t*hi;

    while(lo<=hi)
    {
        long long int mid=(hi-lo)/2+lo;
        if(check(mid,t,a))
        {
            hi=mid-1;
            ans=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
    cout<<ans;

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
