#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n , x , y;
bool good(int p)
{
   ll cnt = (p/x) + (p/y) + 1;
    //cout<<"p: "<<p<<" cnt: "<<cnt<<'\n';
    if(cnt >= n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void solve()
{
    cin >> n >> x >> y;
    int l = 0, r = 1e9;
    if(n == 1)
    {
        cout<<min(x , y);
        return;
    }
    while(l + 1 < r)
    {
        int m = l + (r - l)/2;
        if(good(m))
        {
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r + min(x,y);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
