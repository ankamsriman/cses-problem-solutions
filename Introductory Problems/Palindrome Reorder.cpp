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



void solve()
{
    string s;
    cin>>s;
    map<char,ll>mp;
    fi(i,0,s.size())mp[s[i]]++;
    ll o=0;
    char z;
    for(auto x:mp)
    {
        if(x.s%2==1)
        {
            o++;
            z=x.f;
        }

        if(o>1)
        {
            cout<<"NO SOLUTION";
            return;
        }
    }
    string ans;
    for(auto x:mp)
    {
        if(x.f!=z)
        {
            fi(i,0,x.s/2)
            {
                ans.push_back(x.f);
                // dup.push_back(x.f);
            }
        }
        
    }
    cout<<ans;
    if(o>0)
    {
        fi(i,0,mp[z])
        {
            cout<<z;
        }    
    }
    fd(i,ans.size()-1,0)
    {
        cout<<ans[i];
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
