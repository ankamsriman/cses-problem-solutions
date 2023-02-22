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
    ll n;
    cin>>n;
    vector<ll>a;
    fi(i,0,n)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    ll head=-1,tail=0,ans=-1e18;
    ll s=0;
    fi(i,0,n)
    {
        ans=max(a[i],ans);
    }
    while(tail<n)
    {
        while(head+1<n&&s+a[head+1]>=0)
        {
            head++;
            s+=a[head];
            ans=max(ans,s);
        }
        if(head>=tail)
        {
            s-=a[tail];
            tail++;
        }
        else
        {
            tail++;
            head=tail-1;
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

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
