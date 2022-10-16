#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef pair<double , int> pii;

#define pb push_back

map<pii , int>mp;
vector<pair<double , int> >adj[300];
bool marked[300];
int t = 0;
double prim(int l)
{
priority_queue<pair<double , int> , vector<pair<double , int>> , greater<pair<double , int>> >pq;
double min_dis = 0;
pq.push({0 , l});
while(!pq.empty())
{
pii p = pq.top();
pq.pop();
int x = p.second;
if(marked[x] == true)
{
    continue;
}
min_dis += p.first;
marked[x] = true;
for(auto i : adj[x])
{
    int y = i.second;
    if(marked[y] == false)
    {
        pq.push(i);
    }
}
}
return min_dis;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<double , double> >p;
    int cnt = 1;
    for(int i = 0; i < n; i++)
    {
        double x , y;
        cin >> x >> y;
        p.pb({x , y});
        mp[{x , y}] = cnt;
        cnt++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            double d1 = (p[i].first-p[j].first);
            double d2 = (p[i].second - p[j].second);
            double dis = sqrt((d1*d1) + (d2*d2));
            int l = mp[{p[i].first , p[i].second}];
            int r = mp[{p[j].first , p[j].second}];
            adj[l].pb({dis , r});
            adj[r].pb({dis , l});
        }
    }
    double min_dis = prim(1);
    printf("%0.2lf\n",min_dis);
    if(t > 0)
    {
        cout<<'\n';
    }
    memset(adj , 0 , sizeof(adj));
    memset(marked , 0 , sizeof(marked));
    mp.clear();
}

int main(int argc,char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    cin >> t;
    while(t--){
    //cout<<'\n';
    solve();
    }

    return 0;
}

