#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n;
vector<double> x,v;
bool fun(double m)
{
    double mx = -1e9 , mn = 1e9;
    for(int i = 0; i < n; i++)
    {
        double p = x[i] - (v[i]*m);
        double q = x[i] + (v[i]*m);
        mx = max(mx , p);
        mn = min(mn , q);
    }
    double l = mn - mx;
    return (l >= 0);
}
void solve()
{
    cin >> n;
    x.resize(n);
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> v[i];
    }
    double l = 0,r = 1e9;
    for(int i = 0; i <= 100; i++)
    {
        double m = l + (r - l)/2;
        //cout<<"mid: "<<m<<'\n';
        if(fun(m))
        {
            r = m;
        }
        else{
            l = m;
        }
    }
    printf("%0.20lf",r);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
