#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
void solve()
{
    long long int k;
    cin >> k;
    long long int ans = 6*k*k;
    ans %= MOD;
    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}