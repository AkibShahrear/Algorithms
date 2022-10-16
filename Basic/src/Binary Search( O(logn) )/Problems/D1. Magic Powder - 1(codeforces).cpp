#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 1200;
ll a[N];
ll b[N];
int n , k;
#define pb push_back
bool isgood(int x)
{
    ll rem = 0;
    for(int i = 0; i < n; i++)
    {
        ll q = (a[i] * x);
        ll p = (b[i] - q);
        if(p < 0)
        {
            rem -= p;
        }
    }
    if(k >= rem)
    {
        return 1;
    }
    return 0;
}

void solve()
{

    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 1e9, m = 0;
    while(l <= r)
    {
        m = (l + r)/2;
        if(isgood(m))
        {
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    cout<<r;
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
