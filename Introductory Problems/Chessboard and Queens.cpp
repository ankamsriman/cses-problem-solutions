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
#define star cout<<"*"
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define f first
#define s second
#define ii pair<ll,ll>
 
 
const ll mod =  1e9 + 7;
const ll N =  100000;
 
char g[8][8];
vector<ll>a;
bool check(ll x,ll y)
{
    fi(i,0,a.size())
    {
        if(x==i||y==a[i]||abs(x-i)==abs(y-a[i]))
            return false;
    }
    return true;
 
}
ll n;
ll ans=0;
 
void rec(ll r)
{
    if(r==n)
    {
        ans++;
        return;
    }
    fi(c,0,n)
    {
        if(check(r,c)&&(g[r][c]!='*'))
        {
            a.push_back(c);
            rec(r+1);
            a.pop_back();
        }
    }
}
 
void solve()
{
    n=8;
    fi(i,0,8)
    {
        fi(j,0,8)
        {
            cin>>g[i][j];
        }
    }
    rec(0);
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
