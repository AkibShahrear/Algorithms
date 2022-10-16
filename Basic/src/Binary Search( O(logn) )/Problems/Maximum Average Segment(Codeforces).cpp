#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 1e5 + 10;
int a[N];
int b[N];
int p[N];
int m[N];
int n , d, f = 0 , g = 0;
#define pb push_back

int bin_good(double mid)
{
    memset(p,0,sizeof(p));
    memset(m,0,sizeof(m));
    for(int i = 1; i <= n; i++)
    {
        p[i] = a[i - 1] - mid + p[i - 1];
        m[i] = min(m[i - 1] , p[i]);
        //cout<<"p[i]: "<<p[i]<<'\n';
            //cout<<"m[i]: "<<m[i]<<'\n';

    }
    for(int i = d + 1; i <= n; i++)
    {
        if(m[i - d - 1] <= p[i])
        {
            //cout<<"p[i]: "<<p[i]<<'\n';
            //cout<<"m[i]: "<<m[i]<<'\n';
             g = i - d;
             f = i;
            return i;
        }
    }
    return -1;
}

void solve()
{

    cin >> n >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i + 1] += a[i];
        b[i + 1] += b[i];
    }
    double l = 0, r = 1e9;
    while(l <= r)
    {
        double mid = (l + r)/2;
        if(bin_good(mid) != -1)
        {
            l = mid + 1;

        }
        else{
            r = mid - 1;
        }
        //break;
    }
    cout<<g<<' '<<f;

}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
