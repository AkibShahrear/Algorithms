#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

const int N = 10100;
bool vis[N];
vi adj[N];
int n;
string p , e;
int cnt = 0;

void dfs(int pos)
{
//cout<<"pos: "<<pos<<" e: "<<e<<'\n';
if(e[pos] == 'S')
{
    e[pos] = 'G';
    return;
}    
else if((pos - 1) >= 0 && e[(pos - 1)] =='E')
{
e[(pos - 1)] = 'G';
return;
}
else if((pos + 1) < n && e[(pos + 1)] =='E')
{
    e[(pos + 1)] = 'G';
    return;
}
else{
    return;
}
}

void solve()
{

 cin >> n;
 cin >> e >> p;
 for(int i = 0; i < n; i++)
 {
     if(e[i] == '1')
     {
      e[i] = 'E';
     }
     else{
         e[i] = 'S';
     }
 }
 for(int i = 0; i < n; i++)
 {
     if(p[i] == '1')
     {
         p[i] = 'G';
         cnt = 1;
         dfs(i);
     }
 }
int tot = 0;
//cout<<"e: "<<e<<'\n';
for(int i = 0; i < n; i++)
{
    if(e[i] == 'G')
    {
        tot++;
    }
}
cout<<tot<<'\n';
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;

    while(t--){
    solve();
    }

    return 0;
}