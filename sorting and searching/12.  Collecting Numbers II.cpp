// ANKAM SRIMAN
// https://cses.fi/problemset/task/2217/
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
    ll n,m;cin>>n>>m;
    vt(a,n);scarr(a);
    vt(pos,n+1);
    fi(i,0,n)
    {
        pos[a[i]]=i;
    }
    ll ans=1;
    fi(i,1,n)
    {
        if(pos[i+1]<pos[i])
        {
            ans++;
        }
    }
    
    ll d[]={-1,0,1};
    fi(i,0,m)
    {
        ll x,y;cin>>x>>y;
        x--;y--;
        set<ll>s;
        ll vx=a[x],vy=a[y];
        for(auto z:{vx,vy})
        {
            for(ll j=-1;j<=1;j++)
            {
                ll vz=j+z;
                if(vz>=1 && vz<n)
                {
                    s.insert(vz);
                }
            }
            
        }

        for(ll z:s)
        {
            if(pos[z]>pos[z+1])
            {
                ans--;
            }
        }
        swap(pos[vx],pos[vy]);
        swap(a[x],a[y]);
        for(ll z:s)
        {
            if(pos[z]>pos[z+1])
            {
                ans++;
            }
        }
        pr(ans);

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
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
