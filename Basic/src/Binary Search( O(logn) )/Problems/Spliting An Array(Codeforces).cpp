#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n , k;
vector<ll> a;
bool fun(ll m)
{
    int p = 0;
    ll sum = 0;
    bool ok = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > m)
        {
            ok = 1;
        }
        sum += a[i];
        if(sum > m)
        {
            p++;
            sum = a[i];
        }
    }
    p++;
    return (p <= k && !ok);
}
void solve()
{
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0 , r = 1e18;
    while(l + 1 < r)
    {
        ll m = l + (r - l)/2;
        if(fun(m))
        {
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
