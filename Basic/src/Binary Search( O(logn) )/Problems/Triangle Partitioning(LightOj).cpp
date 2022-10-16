#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

ll is_good(ll m , ll q)
{
    ll tot = 0;
    if((m/5) > q)
    {
        return q + 1;
    }
    ll times = 5;
    while(times <= m)
    {
     tot += (m/times);
     times *= 5;
    }
    //cout<<"tot: "<<tot<<'\n';
    return tot;
}
int no = 0;
void solve()
{
double ab,ac,bc,rat;
cin >> ab >> ac >> bc >> rat;
ll l = -1 , r = 1e18;
ll ans = -1;
for(int i = 0; i <= 100; i++)
{
    ll m = (l + r)/2;
    //cout<<"l: "<<l<<" r: "<<r<<'\n';
    //cout<<"init_m: "<<m<<'\n';
    ll g = is_good(m , q);
    if(g >= q)
    {
        //cout<<"m: "<<m<<'\n';
            //cout<<"is_good(m): "<<is_good(m)<<'\n';
         if(g == q){
            ans = m;
         }
            //break;
         r = m;

    }
    else{
        l = m;
    }
}
if(ans == -1)
{
    cout<<"Case "<<++no<<": "<<"impossible"<<'\n';
}
else{
cout<<"Case "<<++no<<": "<<ans<<'\n';
}
}

int main(int argc,char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;

    while(t--){
    solve();
    }
    return 0;
}
