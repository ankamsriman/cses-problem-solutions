//ANKAM SRIMAN
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
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
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
    ll n,q;cin>>n>>q;
    vt(a,n);
    scarr(a);
    fi(i,1,n)a[i]^=a[i-1];
    while(q--)
    {
        ll x,y;cin>>x>>y;
        x--;y--;
        if(x==0)
        {
            cout<<a[y];
        }
        else
        {
            cout<<(a[y]^a[x-1]);
        }
        nl;
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
 
    // memset(dp,-1,sizeof(dp));
    while (t--)
    {
        // q++;
 
        solve();
    }
    return 0;
}

// Time limit: 1.00 s
// Memory limit: 512 MB



// Given an array of n integers, your task is to process q queries of the form: what is the xor sum of values in range [a,b]?
// Input
// The first input line has two integers n and q: the number of values and queries.
// The second line has n integers x_1,x_2,\dots,x_n: the array values.
// Finally, there are q lines describing the queries. Each line has two integers a and b: what is the xor sum of values in range [a,b]?
// Output
// Print the result of each query.
// Constraints

// 1 \le n,q \le 2 \cdot 10^5
// 1 \le x_i \le 10^9
// 1 \le a \le b \le n

// Example
// Input:
// 8 4
// 3 2 4 5 1 1 5 3
// 2 4
// 5 6
// 1 8
// 3 3

// Output:
// 3
// 0
// 6
// 4
