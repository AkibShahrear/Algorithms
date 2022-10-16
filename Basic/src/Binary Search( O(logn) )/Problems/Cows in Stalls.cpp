#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n , k;
vi a;
map<int , int>mp;

bool fun(int m)
{
 int p = 1, r = 0;
 for(int i = 1; i < n; i++)
 {
     int l = a[i] - a[r];
     if(l >= m)
     {
         r = i;
         p++;
     }
 }
 return p >= k;
}

void solve()
{
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 1e9;
    while(l + 1 < r)
    {
        int m = l + (r - l)/2;
        //cout<<"m: "<<m<<'\n';
        if(fun(m))
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
