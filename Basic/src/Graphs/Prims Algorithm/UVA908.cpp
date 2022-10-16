//'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
vector<pi> edge[3000];
bool marked[3000];
int N;
ll prim(int x)
{
    int cnt = 0;
    priority_queue<pi, vector<pi> , greater<pi> >q;
    ll min_cost = 0;
    q.push({0 , x});
    while(!q.empty())
    {
        pi p = q.top();
        q.pop();
        cnt++;
        int x = p.second;
        //cout<<"x: "<<x<<'\n';
        if(marked[x] == true)
            continue;
        min_cost += p.first;
        //cout<<"p.first: "<<p.first<<'\n';
        marked[x] = true;
        for(auto i : edge[x])
        {
            int y = i.second;
            //cout<<"y: "<<y<<'\n';
            //cout<<"i.first: "<<i.first<<'\n';
            if(marked[y] == false)
            {
                q.push(i);
                /*if(cnt == N)
                {
                    return min_cost;
                }*/
            }
        }
    }
    return min_cost;
}



void solve()
{
    int p = 0;
    while(cin >> N)
    {
        ll totalcost_init = 0;
        for(int i = 0; i < (N - 1); i++)
        {
            int x , y , cost;
            cin >> x >> y >> cost;
            totalcost_init += cost;
        }
        int k;
        cin >> k;
        for(int i = 0; i < k; i++)
        {
            int x , y , cost;
            cin >> x >> y >> cost;
            edge[x].pb({cost , y});
            edge[y].pb({cost , x});
        }
        int m;
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            int x , y , cost;
            cin >> x >> y >> cost;
            edge[x].pb({cost , y});
            edge[y].pb({cost , x});
        }
        ll finalcost = prim(1);
        if(p == 0)
        {
            p++;
        }
        else{
            cout<<'\n';
        }
        cout<<totalcost_init<<'\n';
        cout<<finalcost<<'\n';
        //cout<<'\n';
        memset(edge , 0 ,sizeof(edge));
        memset(marked, 0 , sizeof(marked));
    }
}

int main(int argc,char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
