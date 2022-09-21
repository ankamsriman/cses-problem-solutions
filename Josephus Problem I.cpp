//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
#define fi(i,a,b) for(long long int i = a; i<b; i++)
#define fd(i,a,b) for(long long int i = a; i>=b; i--)
#define vl(a,n) vector<ll>a(n)
#define scarr(a) for(long long int i=0;i<a.size();i++) cin>>a[i]
#define parr(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define ll long long int
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

void solve()
{
    ll n;
    cin>>n;
    queue<ll>q;
    fi(i,0,n)
    {
        q.push(i+1);
    }
    ll i=0;
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        if(i%2==0)
        {
            q.push(x);
        }
        else
        {
            cout<<x<<" ";
        }

        i++;
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
    ll t=1;
    // cin >> t; 
    //getline(cin,s);
    
    while (t--)
    {
        // q++;
        
        solve();
    }
    return 0 ;
}
