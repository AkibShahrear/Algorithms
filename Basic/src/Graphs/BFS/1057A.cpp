///   BISMILLAHIR RAHMANIR RAHEEM
///   SO REMEMBER ME; I WILL REMEMBER YOU   (Surah Al-Baqarah 2:152)
///   THERE ISN'T ANY SHORTCUTS TO ANY PLACE WORTH GOING
///   YOU COULD NEVER CROSS THE OCEAN UNTIL YOU HAVE THE COURAGE TO LOSE SIGHT OF THE SHORE
///   ACTIONS SPEAK LOUDER THAN WORDS

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

int gcd(int a , int b)
{
    if(a%b == 0) return b;
    else{
        return gcd(b , a%b);
    }
}
vi edges[200010];
map<int , int>mp;
int n;
void dfs(int i)
{
    if(i == n)
    {
        return;
    }
    for(auto x : edges[i])
    {
        //cout<<"x: "<<x<<'\n';
        mp[x] = i;
        dfs(x);
    }
}


void solve()
{

cin >> n;
vi a(n - 1);
for(int i = 0; i < (n - 1); i++)
{
    cin >> a[i];
    edges[a[i]].pb(i + 2);
}
dfs(1);
int p = n;
vi v;
while(mp[p])
{
    v.pb(p);
    p = mp[p];
}
cout<<1<<' ';
for(int i = v.size() - 1; i >= 0; i--)
{
    cout<<v[i]<<' ';
}

}

int main(int argc,char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    //int t;
    //cin >> t;

    //while(t--){
    solve();
    //}

    return 0;
}


