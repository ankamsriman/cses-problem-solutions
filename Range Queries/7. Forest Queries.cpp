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
    ll n,m,q;cin>>n>>q;
    m=n;
    vector<vector<ll>>a(n+1,vector<ll>(m+1,0));
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            char c;cin>>c;
            if(c=='*')
            {
                a[i][j]=1;
            }
        }
    }

    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }

    while(q--)
    {
        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        cout<<a[x2][y2]-a[x1-1][y2]-a[x2][y1-1]+a[x1-1][y1-1];
        nl;

    }

}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);;

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



// You are given an n \times n grid representing the map of a forest. Each square is either empty or contains a tree. The upper-left square has coordinates (1,1), and the lower-right square has coordinates (n,n).
// Your task is to process q queries of the form: how many trees are inside a given rectangle in the forest?
// Input
// The first input line has two integers n and q: the size of the forest and the number of queries.
// Then, there are n lines describing the forest. Each line has n characters: . is an empty square and * is a tree.
// Finally, there are q lines describing the queries. Each line has four integers y_1, x_1, y_2, x_2 corresponding to the corners of a rectangle.
// Output
// Print the number of trees inside each rectangle.
// Constraints

// 1 \le n \le 1000
// 1 \le q \le 2 \cdot 10^5
// 1 \le y_1 \le y_2 \le n
// 1 \le x_1 \le x_2 \le n

// Example
// Input:
// 4 3
// .*..
// *.**
// **..
// ****
// 2 2 3 4
// 3 1 3 1
// 1 1 2 2

// Output:
// 3
// 1
// 2
