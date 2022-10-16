#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef  pair<int , int> pi;

#define pb push_back
vi edges[30];
map<int , int>level;
void bfs(int src , int des)
{
    level[src] = 1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto i: edges[node])
        {
            if(level[i] == 0)
            {
                int g = level[node] + 1;
                level[i] = g;
                //cout<<"i: "<<i<<" level[i]: "<<level[i]<<" node: "<<node<<'\n';
                if(i == des){
                    printf("%2d to %2d: %d\n", src, des, level[i] - 1);
                    return;
                }
                q.push(i);
            }
        }
    }
}

void solve()
{
int n, no = 0;
int cnt = 1;
while(1)
{
    for(int i = 1; i <= 30; i++)
   {
    edges[i].clear();
   }

    for(int i = 1; i < 20; i++)
    {
        int p = scanf("%d",&n);
        if(p == EOF) return;
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            edges[i].pb(x);
            edges[x].pb(i);
        }
    }
    int N;
    cin >> N;
    printf("Test Set #%d\n",++no);
    for(int i = 0; i < N; i++)
    {
        int x , y;
        cin >> x >> y;
        bfs(x,y);
        level.clear();
    }
    cout<<endl;
}
}

int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
