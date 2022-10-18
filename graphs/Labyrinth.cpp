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
ll dist[1010][1010];
pair<pair<ll, ll>, char> par[1010][1010];
ll c = 0;
ll n, m;
 
ll dx[4] = {1, 0, -1, 0};
ll dy[4] = {0, 1, 0, -1};
ll dir[4] = {'D', 'R', 'U', 'L'};
string ans;
 
bool check(ll x, ll y)
{
    if (x < 0 || x > n - 1 || y < 0 || y > m - 1 || g[x][y] == '#')
        return 0;
    return 1;
}
void prin(pair<pair<ll, ll>, char> node)
{
    pair<ll, ll>x = { -1, -1};
    if (x == node.f)
    {
        return;
    }
 
    prin( par[node.f.f][node.f.s]);
    ans.push_back(node.s);
}
void bfs(pair<ll, ll>node, pair<pair<ll, ll>, char> p)
{
    vis[node.f][node.s] = 1;
    par[node.f][node.s] = p;
    // cout << " " << node.f << " " << node.s << "  ";
    // c++;
 
    queue<pair<ll, ll>>q;
    q.push(node);
    dist[node.f][node.s] = 0;
 
 
 
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        // if (vis[node.f][node.s]) continue;
        // vis[node.f][node.s] = 1;
 
        fi(i, 0, 4)
        {
            if (check(node.f + dx[i], node.s + dy[i]) && dist[node.f + dx[i]][node.s + dy[i]] > 1 + dist[node.f][node.s] )
            {
                // bfs({node.f + dx[i], node.s + dy[i]}, {node, dir[i]});
                dist[node.f + dx[i]][node.s + dy[i]] = 1 + dist[node.f][node.s] ;
                q.push({node.f + dx[i], node.s + dy[i]});
                par[node.f + dx[i]][node.s + dy[i]] = {node, dir[i]};
 
            }
        }
    }
 
 
 
}
void solve()
{
 
    // ll n, m;
    cin >> n >> m;
    pair<ll, ll>st, en;
    // memset(dist, 1e9, sizeof(dist));
    fi(i, 0, n)
    {
        fi(j, 0, m)
        {
            // cout << dist[i][j];
            dist[i][j] = 1e9;
        }
        // nl;
    }
    fi(i, 0, n)
    {
        fi(j, 0, m)
        {
            cin >> g[i][j];
            if (g[i][j] == 'A')st = {i, j};
            if (g[i][j] == 'B')en = {i, j};
        }
    }
 
    bfs(st, {{ -1, -1}, '%'} );
 
    if (dist[en.f][en.s] != 1e9)
    {
        cout << "YES";
        nl;
        prin( par[en.f][en.s]);
        // fi(i, 0, 5)
        // {
        //     fi(j, 0, 5)
        //     {
        //         cout << dist[i][j];
        //     }
        //     nl;
        // }
        cout << ans.size();
        nl;
        cout << ans;
        nl;
    }
    else
    {
        cout << "NO";
    }
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
