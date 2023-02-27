#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vtr vector<string>
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define ld long double
#define bb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
#define wh while
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
void solve()
{
    int n,m;cin>>n>>m;
    char a[n+2][m+2];
    for(int i=1;i<=n;i++)   
    {
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    for(int i=0;i<=n+1;i++)
    {
        a[i][0]='?';
        a[i][m+1]='?';
    }
    for(int i=0;i<=m+1;i++)
    {
        a[0][i]='?';
        a[n+1][i]='?';
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='S' && (a[i-1][j]=='W' ||a[i+1][j]=='W' || a[i][j+1]=='W' || a[i][j-1]=='W'))
            {
                no;
                return;
            }
        }
    }
    yes nl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='.') cout<<"D";
            else cout<<a[i][j];
        }
        cout nl;
    }
}
signed main()
{
    fast_in_out();
    int u = 1;
    //cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}