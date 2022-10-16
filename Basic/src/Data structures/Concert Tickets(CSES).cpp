#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back


map<int , int> mp;
void solve()
{
int n, m;
cin >> n >> m;
vi h(n),t(m);
multiset<int,greater<int> >ms;
for(int i = 0; i < n; i++)
{
    cin >> h[i];
    ms.insert(h[i]);

}
for(int i = 0; i < m; i++)
{
    cin >> t[i];
}
//sort(h.rbegin() , h.rend());
//sort(t.begin() , t.end());


int cnt = 0;
for(int i = 0; i < m; i++)
{
    //cout<<"h[0]: "<<h[0]<<" t[i]: "<<t[i]<<'\n';
    auto p = ms.lower_bound(t[i]);
    if(p == ms.end()) cout<<-1<<'\n';
    else{
        cout<<*p<<'\n';
        ms.erase(p);
    }
}
}

int main(int argc , char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}

