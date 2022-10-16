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
vi edges[3000];
int min_grp = 0;
void dfs(int x , int d)
{
    //cout<<"x: "<<x<<" d: "<<d<<'\n';
    min_grp = max(min_grp , d);
    for(auto i : edges[x])
    {
        dfs(i , d + 1);
    }
}

void solve()
{
cin >> n;
for(int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    if(x == -1) x = 0;
    edges[x].pb(i + 1);
}
dfs(0 , 0);
cout<<min_grp<<endl;
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



