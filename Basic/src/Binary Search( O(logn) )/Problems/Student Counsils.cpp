#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n , k;
vector<ll> a;
bool good(ll x)
{
    ll s = x*k;
    for(int i = 0; i < n; i++)
    {
        s -= min(x , a[i]);
    }
    return s <= 0;
}
void solve()
{
    cin >> k;
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1e12;
    while(l + 1 < r)
    {
        ll m = l + (r - l)/2;
        if(good(m))
        {
            l = m;
        }
        else{
            r = m;
        }
    }
    cout<<l;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
