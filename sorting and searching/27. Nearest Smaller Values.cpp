// ANKAM SRIMAN
// https://cses.fi/problemset/task/1645/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define nl cout<<"\n";

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++);
    stack<int>st;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        while(!st.empty()&& a[st.top()]>=a[i])
        {
            st.pop();
        }
        cout<<(st.empty() ? 0:st.top()+1)<<" ";

        st.push(i);

    }
    

}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;
    int t = 1;
    // cin >> t;
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
