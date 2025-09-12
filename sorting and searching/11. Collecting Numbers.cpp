// ANKAM SRIMAN
// https://cses.fi/problemset/task/2216/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a) for (long long int i = 0; i < a.size(); i++) cin >> a[i]
#define parr(a)  for (long long int i = 0; i < a.size(); i++) cout << a[i] << " "
#define prr(a)  for (auto x:a) cout << x << " "
#define vt(a,n) vector<long long int>a(n)
#define ll long long
#define ull unsigned long long int
#define pb(x) push_back(x)
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll,ll>


using state =pair<int,int>;
const ll mod = 1e9 + 7;
const ll N = 100000;

void solve()
{
    ll n;cin>>n;
    vt(a,n);scarr(a);
    map<ll,ll>mp1;
    map<ll,char>mp2;
    fi(i,0,n)
    {
        if(mp1[a[i]+1]==1)
        {
            mp2[a[i]]='l';;
        }
        else
        {
            mp2[a[i]]='r';
        }
        mp1[a[i]]=1;
    }
    vector<ll>b=a;
    sort(b.begin(),b.end());
    ll ans=1;
    fi(i,0,n-1)
    {
        if(mp2[b[i]]=='l')
        {
            ans++;
        }
    }
    pr(ans);
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
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
