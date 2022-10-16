#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
int n;
cin >> n;
vi c(n) , a(n);
for(int i = 0; i< n; i++)
{
    cin >> c[i];
}
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
for(int i = 0; i < (n - 1); i++)
{
    int need = c[i + 1] - a[i + 1];
    int take = min(need , a[i]);
    a[i] -= take;
    a[i + 1] += take;
}
for(int i = 0; i < n; i++)
{
    cout<<a[i]<<' ';
}
cout<<'\n';
}

int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
     solve();
    }
    return 0;
}


