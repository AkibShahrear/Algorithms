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
string a[3];
void dfs(int x , int y)
{
    //cout<<"x: "<<x<<" y: "<<y<<'\n';
    if(x ==  1 && y == (n - 1))
    {
        a[x][y] = '8';
        return;
    }
    if( x >= 0 and x < 2 && y < n && a[x][y] == '0'){
        int p = x + 1;
        int q = y + 1;
        if(x == 0){
        if(q < n && a[x][q] == '0'){
         dfs(x , q);
        }
        if(p < 2 && q < n && a[p][q] == '0'){
         dfs(p , q);
        }
        }
        else{
        if((x - 1) >= 0 && q < n && a[x - 1][q] == '0'){
        dfs((x - 1) , q);
        }
        if(q < n && a[x][q] == '0'){
        dfs(x , q);
        }
        }
    }
    else{
        return;
    }
}

void solve()
{
cin >> n;
//cout<<"n: "<<n<<'\n';
for(int i = 0; i < 2; i++)
{
    cin >> a[i];
    //cout<<"a[i]: "<<a[i]<<'\n';1
}
//cout<<"Hi";
dfs(0 , 0);
if(a[1][(n - 1)] == '8')
{
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
}

int main(int argc,char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;

    while(t--){
    solve();
    }

    return 0;
}

