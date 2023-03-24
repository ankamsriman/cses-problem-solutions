// ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a)                                 \
    for (long long int i = 0; i < a.size(); i++) \
    cin >> a[i]
#define parr(a)                                  \
    for (long long int i = 0; i < a.size(); i++) \
    cout << a[i] << " "
#define ll long long
#define ull unsigned long long int
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll, ll>

const ll mod = 1e9 + 7;
const ll N = 100000;



 
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(k);
    scarr(a);
    // parr(a);
    multiset<ll>ms1,ms2;
    ms1.insert(0);
    ms1.insert(n);
    ms2.insert(n);
    fi(i,0,k)
    {
        auto it=ms1.lower_bound(a[i]);
        ll y=*it;
        it--;
        ll x=*it;
        
        ll z=y-x;

        ms1.insert(a[i]);
        ms2.erase(ms2.find(y-x));
        ms2.insert(a[i]-x);
        ms2.insert(y-a[i]);

        auto it2=ms2.end();
        it2--;
        cout<<(*it2)<<" ";
    }

}   


signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
