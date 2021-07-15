#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
double n , k;
bool fun(double x, vector<double>&a)
{
    ll sum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        sum += (a[i]/x);
    }
    if(sum >= k)
    {
        return 1;
    }
    return 0;
}
void solve()
{
    cin >> n >> k;
    vector<double>v(n);
    double mx = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum = max(sum , v[i]);
    }
        double l = 0 , r = 1e18;
        for(int j = 0; j < 100; j++)
        {
            double m = l + (r -  l)/2;
            if(fun(m,v))
            {
                l = m;
            }
            else{
                r = m;
            }
        }
        printf("%0.20lf",l);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
