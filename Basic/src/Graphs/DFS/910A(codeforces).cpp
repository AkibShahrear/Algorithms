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
int n , d;
string s;
int cnt  = 0;
bool is = 0;
bool ok = 0;
int ans = -1;
bool vis[200];
void dfs(int i)
{
if(vis[i] == true) return;
vis[i] = true;
int q = i + d;
cnt++;
if(ans > -1)
{
    return;
}
if(q >= (n - 1))
{
is = 1;
ans = cnt;
return;
}
else{
    //cout<<"q: "<<q<<'\n';
    bool u= 0;
    for(int j = q; j > i; j--)
    {
        //cout<<"j: "<<j<<'\n';
        if(!is && s[j] == '1')
        {
            u = 1;
            //cout<<"j: "<<j<<'\n';
            dfs(j);
        }
    }
    return;
}
}

void solve()
{
cin >> n >> d;
cin >> s;
if(s[n - 1] != '1')
{
    cout<<-1<<'\n';
    return;
}
 dfs(0);
cout<<ans<<endl;
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


