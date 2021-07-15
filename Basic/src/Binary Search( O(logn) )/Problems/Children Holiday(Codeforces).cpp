#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int m , n;
vector<int>t,y,z;
vi a;
bool good(int x)
{

    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        int p = (x%(t[i]*z[i] + y[i]))/t[i];
        int q = (x/(t[i]*z[i] + y[i])*z[i]) + min(z[i] , p);
        sum += (x/(t[i]*z[i] + y[i])*z[i]) + min(z[i] , p);

    }
    if(sum >= m)
    {
        return 1;
    }
    else{
        //a.clear();
        return 0;
    }
}

void solve()
{
cin >> m >> n;
a.resize(n);
t.resize(n);
y.resize(n);
z.resize(n);
for(int i = 0; i < n; i++)
{
    cin >>t[i]>>z[i]>>y[i];
}
int l = -1 , r = 1e9;
while(l + 1 < r)
{
    int mid = l + (r - l)/2;
    //cout<<mid<<'\n';
    if(good(mid))
    {
        r = mid;
    }
    else
    {
        l = mid;
    }
}
cout<<r<<'\n';
vi v;
for(int i = 0; i < n; i++)
{
    int sum = 0;
    int p = (r/(t[i]*z[i] + y[i]))*z[i];
    sum += p;
    sum += min(z[i] , (r%(t[i]*z[i] + y[i]))/t[i]);
    v.push_back(sum);
}
int tb = 0;
for(int i = 0; i < v.size(); i++)
{
    if(tb + v[i] <= m)
    {
        cout<< v[i]<<' ';
        tb += v[i];
    }
    else{
        if(tb == m)
        {
            cout<<0<<'\n';
        }
        else{
            cout<< (m - tb)<<' ';
            tb = m;
        }
    }
}
cout<<endl;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
