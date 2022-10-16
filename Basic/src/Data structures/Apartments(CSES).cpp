#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back


map<int , int> mp;
void solve()
{
int n, m , k;
cin >> n >> m >> k;
vi a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
for(int i = 0; i < m; i++)
{
    int x;
    cin >> x;
    mp[x]++;
}
sort(a.begin() , a.end());
int cnt = 0;
for(int i = 0; i < n; i++)
{
    int p = a[i] - k;
    int q = mp.lower_bound(p)->first;
    int r = mp.lower_bound(p)->second;
    //cout<<"p: "<<p<<" q: "<<q<<" a[i]: "<<a[i]<<'\n';
    if(abs(q - a[i]) <= k && r > 0)
    {
        mp[q]--;
        if(mp[q] == 0)
        {
            mp.erase(q);
        }
        cnt++;
    }

}
cout<<cnt<<endl;
}

int main(int argc , char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}
