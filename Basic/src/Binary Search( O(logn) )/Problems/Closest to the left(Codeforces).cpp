#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n , k;
    cin >> n >> k;
    vi a(n + 1),b(k + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= k; i++)
    {
        cin >> b[i];
        int l = 1, r = n;
        int ans = -1;
        while(l <= r)
        {
            int mid = l + (r - l)/2;
            if(a[mid] == b[i])
            {
                ans = mid;
            }
            if(a[mid] > b[i])
            {
                r = mid - 1;
            }
            else{
                l = mid + 1;
                ans = mid;
            }
        }
        if(ans == -1)
        {
            cout<<0<<'\n';
        }
        else{
            cout<<ans<<'\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
