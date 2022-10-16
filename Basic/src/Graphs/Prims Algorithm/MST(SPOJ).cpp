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
vector<pi>edges[10010];
map<int , int> vis;
ll mst(int x)
{
   priority_queue<pi , vector<pi> , greater<pi> >q;
   q.push({0 , x});
   ll min_cost = 0;
   while(!q.empty())
   {
       pi p = q.top();
       q.pop();
       int x = p.second;
       if(vis[x] == 1)
       {
           continue;
       }
       vis[x] = 1;
       int y = p.first;
       min_cost += y;
       for(auto i: edges[x])
       {
           int w = i.second;
           if(vis[w] == 0)
           {
               q.push(i);
           }
       }
   }
   return min_cost;
}




int no = 0;
void solve()
{
int N,M;
cin >> N >> M;
for(int i = 0; i < M; i++)
{
    int start , _end , cost;
    cin >> start >> _end >> cost;
    edges[start].pb({cost , _end});
    edges[_end].pb({cost, start});
}
ll min_cost = mst(1 );
cout<<min_cost<<'\n';
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

