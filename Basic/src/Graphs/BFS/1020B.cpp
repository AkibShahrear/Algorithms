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
int n;
vi a;
map<int , int>mp;

int cycle(int i){
mp[i]++;
int p = a[i] - 1;
//cout<<"p: "<<p<<'\n';
while(true)
{
mp[p]++;
p = a[p] - 1;
if(mp[p] == 2)
{
    mp.clear();
    return p + 1;
}
}

}


void solve()
{
cin >> n;
a.resize(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
for(int i = 0; i < n; i++)
{
    cout<<cycle(i)<<' ';
    mp.clear();
}
}

int main(int argc,char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    //int t;
    //cin >> t;

    //while(t--){
    solve();
    //}

    return 0;
}


