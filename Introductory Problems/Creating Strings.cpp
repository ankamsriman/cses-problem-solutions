
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

ll n;
string p;
map<char,ll>mp;
vector<string>ans;
void rec(ll l)
{
    if(l==n)
    {
        ans.push_back(p);
        return;
    }
    for(auto x:mp)
    {
        if(mp[x.f]>0)
        {
            p.push_back(x.f);
            mp[x.f]--;
            rec(l+1);
            mp[x.f]++;
            p.pop_back();
        }
        
    }

}
void solve()
{
    string s;
    cin>>s;
    n=s.length();
    
    fi(i,0,n)mp[s[i]]++;
    rec(0);
    cout<<ans.size();
    nl;
    fi(i,0,ans.size())
    {
        cout<<ans[i];
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

    ll t=1;
    // cin >> t; 
    while (t--)
    {
        // q++;

        solve();
    }
    return 0 ;
}
