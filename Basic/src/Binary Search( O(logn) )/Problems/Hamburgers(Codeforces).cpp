#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
ll nb, ns, nc;
ll pb, ps, pc, b, s, c;
ll r;
bool good(ll x)
{
    long long p = x*b;
    long long q = x*s;
    long long t = x*c;
   if(p > 0){
   p -= nb;
   p = max(0LL , p);
   }
   if(q > 0){
   q -= ns;
   q = max(0LL , q);
   }
   if(t > 0){
   t -= nc;
   t = max(0LL , t);
   }
   //cout<<"p: "<<p<<" q: "<<q<<" t: "<<t<<'\n';
   p *= pb;
   q *= ps;
   t *= pc;
   //cout<<"p : "<<p<<" q: "<<q<<" t: "<<t<<'\n';
    if((p + q + t) <= r)
    {
        return 1;
    }
    return 0;
}
void solve()
{
     b = 0, s = 0, c = 0;
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++)
    {
        if(S[i] == 'B')
        {
            b++;
        }
        if(S[i] == 'C')
        {
          c++;
        }
        if(S[i] == 'S')
        {
            s++;
        }

    }

    cin >> nb >> ns >> nc;

    cin >> pb >> ps >> pc;

    cin >> r;
    /*if(b > 0){
      p = nb/b;
    }
    if(s > 0){
      q = ns/s;
    }
    if(c > 0){
      h = nc/c;
    }
    int g = min(p, min(q , h));*/
    //cout<<"good(7): "<<good(7)<<'\n';
    ll ans = 0;
    ll l = 0, r = 1e13;
    for(int i = 0; i <= 100; i++)
    {
        ll m = l + (r - l)/2;
        //cout<<"m: "<<m<<'\n';
        if(good(m))
           {
               //cout<<"m: "<<m<<'\n';
               ans = m;
               l = m;
           }
          else{
            r = m;
          }
    }
    cout<<ans<<'\n';
}

int main()
{
 ios::sync_with_stdio(0);cin.tie(0);

 solve();

 return 0;
}
