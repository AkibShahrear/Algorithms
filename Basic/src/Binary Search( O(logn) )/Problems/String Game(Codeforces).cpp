#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string t , p;
vi a;
bool good(int m)
{
    string g = t;
    string h = p;
    for(int i = 0; i < m; i++)
    {
        g[(a[i] - 1)] = '0';
    }
    //cout<<"g: "<<g<<'\n';
    int j = 0 , l = p.length() , cnt = 0;
    for(int i = 0; i < g.length(); i++)
    {
        if(g[i] == h[j])
        {
            cnt++;
            j++;
            if(cnt == l)
            {
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
    cin >> t;
    cin >> p;
    //cout<<"t: "<<t<<" p: "<<p<<'\n';
    for(int i = 0; i < t.length(); i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int l = 0 , r = t.length();
    while(l + 1 < r)
    {
        int m = l + (r - l)/2;
        //cout<<"m: "<<m<<'\n';
        //cout<<"good: "<<good(m)<<'\n';
        if(good(m))
        {
            l = m;
        }
        else{
            r = m;
        }
    }
    cout<<l<<'\n';
}

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
