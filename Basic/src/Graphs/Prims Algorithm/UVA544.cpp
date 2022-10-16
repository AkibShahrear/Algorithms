#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
map<string , int> mp;
vector<pi> edges[300];
int mark[300];
int no = 0;
ll prim(int src , int des)
{
    priority_queue<pi>pq;
    int y;
    ll max_cost = 0;
    pq.push({0 , src});
    pi p;
    int cnt = 0;
    while(!pq.empty())
    {
       p = pq.top();
       pq.pop();
       int x = p.second;
       //cout<<"x: "<<x<<'\n';

       if(mark[x] == 1)
       {
           continue;
       }
       //cout<<"p.first: "<<p.first<<'\n';
       if(cnt < 2){
       max_cost = max(max_cost , 1ll*p.first);
       cnt++;
       }
       else{
        max_cost = min(max_cost , 1ll*p.first);
       }
       mark[x] = 1;
       if(x == des)
       {
           return max_cost;
       }
       for(auto i : edges[x])
       {
           y = i.second;
           if(mark[y] == 0)
           {
               pq.push(i);
           }
       }
    }
    return 0;
}

void solve()
{
   int n , r;
   while(cin >> n >> r)
   {
       if(n == 0 && r == 0)
       {
           break;
       }
       int cnt = 1;
       for(int i = 0; i < r; i++)
       {
           string s1 , s2;
           int weight;
           cin >> s1 >> s2 >> weight;
           if(mp[s1] == 0)
           {
               mp[s1] = cnt;
               cnt++;
           }
           if(mp[s2] == 0)
           {
               mp[s2] = cnt;
               cnt++;
           }
           edges[mp[s1]].pb({weight , mp[s2]});
           edges[mp[s2]].pb({weight ,mp[s1]});
       }
       string src , des;
       cin >> src >> des;
       ll cost = prim(mp[src],mp[des]);
       printf("Scenario #%d\n", ++no);
       cout<<cost<<" tons\n"<<'\n';
       mp.clear();
       memset(edges , 0 , sizeof(edges));
       memset(mark , 0 , sizeof(mark));
   }


}

int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}

