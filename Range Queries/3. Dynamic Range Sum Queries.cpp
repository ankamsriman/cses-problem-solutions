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



struct node
{
    ll val;
    node()
    {
        val=0;
    }
    node(ll x)
    {
        val=x;
    }
};

struct seg
{
    vector<node>t;
    seg(ll n)
    {
        t.resize(4*(n+1));
        fi(i,0,t.size())
        {
            t[i]=node(0);
        }
    }
    node merge(node x,node y)
    {
        return node(x.val+y.val);
    }
    void build(ll id,ll l,ll r,vector<ll>&a)
    {
        if(l==r)
        {
            t[id]=node(a[l]);
            return;
        }
        ll mid=(l+r)/2;
        build(id*2,l,mid,a);build(id*2+1,mid+1,r,a);
        t[id]=merge(t[id*2],t[2*id+1]);
    }
    void update(ll id,ll l,ll r,ll pos,ll val,vector<ll>&a)
    {
        if(pos<l||pos>r)
        {
            return;
        }
        if(l==r)
        {
            t[id]=node(val);
            a[pos]=val;
            return;
        }
        ll mid=(l+r)/2;
        update(id*2,l,mid,pos,val,a);update(id*2+1,mid+1,r,pos,val,a);
        t[id]=merge(t[2*id],t[2*id+1]);
    }
    node query(ll id,ll l, ll r,ll lq,ll rq)
    {
        if(r<lq||l>rq)
        {
            return node(0);
        }
        if(l>=lq&&r<=rq)
        {
            return t[id];
        }
        ll mid=(l+r)/2;
        return merge(query(2*id,l,mid,lq,rq),query(2*id+1,mid+1,r,lq,rq));

    }
};


void solve()
{
    ll n,q;cin>>n>>q;
    vt(a,n);scarr(a);
    // prr(a);
    seg s(n);
    // s.build(1,0,n-1,a);
    fi(i,0,n)
    {
        s.update(1,0,n-1,i,a[i],a);
    }
    while(q--)
    {
        ll z;cin>>z;
        if(z==1)
        {
            ll k,u;cin>>k>>u;k--;
            s.update(1,0,n-1,k,u,a);
        }
        else
        {
            ll x,y;cin>>x>>y;x--;y--;
            node ans=s.query(1,0,n-1,x,y);
            cout<<ans.val;
            nl;
        }
    
    }
    // auto x=node();
    // cout<<x.mn;

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



// Given an array of n integers, your task is to process q queries of the following types:

// update the value at position k to u
// what is the sum of values in range [a,b]?

// Input
// The first input line has two integers n and q: the number of values and queries.
// The second line has n integers x_1,x_2,\dots,x_n: the array values.
// Finally, there are q lines describing the queries. Each line has three integers: either "1 k u" or "2 a b".
// Output
// Print the result of each query of type 2.
// Constraints

// 1 \le n,q \le 2 \cdot 10^5
// 1 \le x_i, u \le 10^9
// 1 \le k \le n
// 1 \le a \le b \le n

// Example
// Input:
// 8 4
// 3 2 4 5 1 1 5 3
// 2 1 4
// 2 5 6
// 1 3 1
// 2 1 4

// Output:
// 14
// 2
// 11
