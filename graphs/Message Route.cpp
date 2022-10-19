//ANKAM SRIMAN
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
#define prvt(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define star cout<<"*"
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define pr(x) cout<<x<<"\n"
#define f first
#define s second
#define ii pair<ll,ll>


const ll mod =  1e9 + 7;
// const ll N =  1000100;

vector<ll>g[100010];
ll par[100010];
ll dist[100010];
ll vis[100010];
ll n, m;
vector<ll>ans;
void print(ll node)
{
    if (node == -1) return;
    print(par[node]);
    // cout << node;
    ans.push_back(node);
}
void solve()
{

    // ll n, m;
    cin >> n >> m;
    fi(i, 0, m)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<ll>q;
    fi(i, 1, n + 1)
    {
        dist[i] = 1e9;
    }
    q.push(1);
    dist[1] = 1;
    par[1] = -1;
    while (!q.empty())
    {
        ll node = q.front();
        q.pop();
        vis[node] = 1;

        for (auto x : g[node])
        {
            if (!vis[x] && dist[x] > 1 + dist[node])
            {
                dist[x] = 1 + dist[node];
                q.push(x);
                par[x] = node;
            }
        }
    }
    if (vis[n])
    {
        print(n);
        cout << ans.size();
        nl;
        fi(i, 0, ans.size())
        {
            cout << ans[i] << " ";
        }

    }
    else
    {
        cout << "IMPOSSIBLE";
        nl;
    }




}

//string s;
signed main()
{
    //py;
    // fun();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //pow2();

    IOS;
    //cout<<"*";
    ll t = 1;
    //cin >> t;
    //getline(cin,s);

    while (t--)
    {
        // q++;

        solve();
    }
    return 0 ;
}
