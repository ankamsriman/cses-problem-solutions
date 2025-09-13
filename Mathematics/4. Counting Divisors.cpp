// ANKAM SRIMAN
// https://cses.fi/problemset/task/1713/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N=1e6;
int sp[N+1];
void seive()
{
    for(int i=2;i<=N;i++)
    {
        sp[i]=i;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(sp[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(sp[j]==j)
                {
                    sp[j]=i;
                }
            }
        }
    }
}

int nofdiv(int n)
{
    int ans=1;
    while(n>1)
    {   int cnt=0,p=sp[n];
        while(n%p==0)
        {
            n/=p;
            cnt++;
        }
        ans*=(cnt+1);
    }
    return ans;
}
void solve()
{
    seive();

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<nofdiv(n)<<"\n";
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
