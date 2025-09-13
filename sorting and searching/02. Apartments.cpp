//ANKAM SRIMAN
// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i,a,b) for(long long int i = a; i<b; i++)
#define fd(i,a,b) for(long long int i = a; i>=b; i--)
#define vl(a,n) vector<ll>a(n)
#define scarr(a) for(long long int i=0;i<a.size();i++) cin>>a[i]
#define parr(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define ll long long
#define ull unsigned long long int
//transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout<<"\n"
#define pr(x) cout<<x<<"\n"
#define star cout<<"*"
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define f first
#define s second
#define ii pair<ll,ll>


const ll mod =  1e9 + 7;
const ll N =  100000;



void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    scarr(a);
    scarr(b);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=0,j=0;
    ll ans=0;
    while(i<n&&j<m)
    {
        if(b[j]>=a[i]-k&&b[j]<=a[i]+k)
        {
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<ans;
    nl;

    


}   

signed main()
{


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t=1;
    // cin >> t; 
    while (t--)
    {
        // q++;

        solve();
    }
    return 0 ;
}
