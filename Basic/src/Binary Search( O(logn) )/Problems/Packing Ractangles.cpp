#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    ll w , h, n;
    cin >> w >> h >> n;
    long long l = 0, r = 1e18, ans = 1e18;
    //cout<<"r: "<<r<<'\n';
    while(l <= r)
    {
        unsigned long long mid =(l + r)/2;
        //cout<<"l: "<<l<<" r: "<<r<<'\n';
        unsigned long long p = (mid/w)*(mid/h) ;
        //cout<<"p: "<<p<<'\n';
        if(p >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
