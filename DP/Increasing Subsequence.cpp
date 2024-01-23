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
    ll n;cin>>n;vt(a,n);scarr(a);
    vector<ll>temp,ans;
    fi(i,0,n)
    {
        if(temp.empty()||temp.back()<a[i])
        {
            temp.push_back(a[i]);
            // ans.push_back(temp.size()-1);
        }
        else
        {
            auto id=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
            temp[id]=a[i];
            // ans.push_back(id);
        }
    }
    

    pr(temp.size());
    /*################################for printing subsequence ################################*/
    // ll c=temp.size()-1;
    // vector<ll>ans2;
    // fd(i,n-1,0)
    // {
    //     if(ans[i]==c)
    //     {
    //         c--;
    //         ans2.push_back(a[i]);        
    //     }
    // }
    // fd(i,ans2.size()-1,0)
    // {
    //     cout<<ans2[i]<<" ";
    // }
    // nl;


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



// You are given an array containing n integers. Your task is to determine the longest increasing subsequence in the array, i.e., the longest subsequence where every element is larger than the previous one.
// A subsequence is a sequence that can be derived from the array by deleting some elements without changing the order of the remaining elements. 
// Input
// The first line contains an integer n: the size of the array.
// After this there are n integers x_1,x_2,\ldots,x_n: the contents of the array.
// Output
// Print the length of the longest increasing subsequence.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x_i \le 10^9

// Example
// Input:
// 8
// 7 3 5 3 6 2 9 8

// Output:
// 4
