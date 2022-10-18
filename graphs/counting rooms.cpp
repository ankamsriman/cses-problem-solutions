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

char g[1010][1010];
ll vis[1010][1010];
ll c = 0;
ll n, m;

ll dx[4] = {1, 0, -1, 0};
ll dy[4] = {0, 1, 0, -1};
bool check(ll x, ll y)
{
    if (x < 0 || x > n - 1 || y < 0 || y > m - 1 || g[x][y] == '#')
        return 0;
    return 1;
}
void dfs(ll x, ll y)
{
    vis[x][y] = 1;
    // cout << " " << x << " " << y << "  ";
    // c++;
    fi(i, 0, 4)
    {
        if (check(x + dx[i], y + dy[i]) && !vis[x + dx[i]][y + dy[i]] )
        {
            dfs(x + dx[i], y + dy[i]);
        }
    }

    if (check(x, y + 1) && !vis[x][y + 1])
    {
        dfs(x, y + 1);
    }
}
void solve()
{

    // ll n, m;
    cin >> n >> m;
    fi(i, 0, n)
    {
        fi(j, 0, m)
        {
            cin >> g[i][j];
        }
    }
    ll r = 0;
    fi(i, 0, n)
    {
        fi(j, 0, m)
        {
            if (!vis[i][j] && g[i][j] != '#')
            {
                // cout << i << j;
                dfs(i, j);
                // nl;
                r++;
            }

        }
    }
    cout << r;
    nl;


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
