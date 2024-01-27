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
const ll N = 100010;

bool cmp(pair<ll,ii>&a,pair<ll,ii>&b)
{
    return a.s.s<b.s.s;
}

void solve()
{
    ll n;cin>>n;
    vector<pair<ll,ii>>v;
    fi(i,0,n)
    {
        ll x,y;cin>>x>>y;
        v.push_back({x,{-1,i+1}});
        v.push_back({y,{1,i+1}});
    }
    sort(all(v));
    ll mx=0,j=0;
    vector<ll>vac;
    vector<ll> ans(2*n+1);
    fi(i,0,2*n)
    {
        if(v[i].s.f==1)
        {
            vac.push_back(ans[v[i].s.s]);
        }
        else if(j==vac.size())
        {
            mx++;
            ans[v[i].s.s]=mx;
        }
        else
        {
            ans[v[i].s.s]=vac[j];
            j++;
        }

    }
    pr(mx);
    fi(i,1,n+1)
    {
        cout<<ans[i]<<" ";
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



// There is a large hotel, and n customers will arrive soon. Each customer wants to have a single room.
// You know each customer's arrival and departure day. Two customers can stay in the same room if the departure day of the first customer is earlier than the arrival day of the second customer.
// What is the minimum number of rooms that are needed to accommodate all customers? And how can the rooms be allocated?
// Input
// The first input line contains an integer n: the number of customers.
// Then there are n lines, each of which describes one customer. Each line has two integers a and b: the arrival and departure day.
// Output
// Print first an integer k: the minimum number of rooms required.
// After that, print a line that contains the room number of each customer in the same order as in the input. The rooms are numbered 1,2,\ldots,k. You can print any valid solution.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le a \le b \le 10^9

// Example
// Input:
// 3
// 1 2
// 2 4
// 4 4

// Output:
// 2
// 1 2 1
