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
vector<pi>edges[200];
map<int , int> vis,mark;
vi path;
ll mst(int x, int n)
{
    priority_queue<pi , vector<pi>, greater<pi> >q;
    ll min_cost = 0;
    q.push({0 , x});
    int cnt = 0;
    int ok = 0;
    while(!q.empty())
    {
        pi p = q.top();
        q.pop();
        int x = p.second;
        if(mark[x] == 1)
            continue;
        path.pb(x);
        min_cost += p.first;
        cnt++;
        if(cnt == n)
        {
            ok = 1;
        }
        mark[x] = 1;
        for(auto i:edges[x])
        {
            int y = i.second;
            if(mark[y] == 0)
            {
                //cout<<"i.first: "<<i.first<<" i.second: "<<i.second<<'\n';
                q.push(i);
            }
        }
    }
    if(!ok)
    {
        return -1;
    }
    return min_cost;
}

ll second_mst(int x , int n)
{
    priority_queue<pi , vector<pi>, greater<pi> >q;
    ll min_cost = 0;
    q.push({0 , x});
    int cnt = 0;
    while(!q.empty())
    {
        pi p = q.top();
        q.pop();
        int x = p.second;
        if(vis[x] == 1)
            continue;
        cnt++;
        //cout<<cnt<<'\n';
        if(cnt == n)
        {
            continue;
        }
        min_cost += p.first;
        vis[x] = 1;
        for(auto i:edges[x])
        {
            //cout<<"hi: "<<'\n';
            int y = i.second;
            if(vis[y] == 0)
            {
                //cout<<"i.first: "<<i.first<<" i.second: "<<i.second<<'\n';
                q.push(i);
            }
        }
    }
    return min_cost;
}


int no = 0;
void solve()
{
int v,e;
cin >> v >> e;
for(int i = 0; i < e; i++)
{
    int start , _end , cost;
    cin >> start >> _end >> cost;
    edges[start].pb({cost , _end});
    edges[_end].pb({cost, start});
}
ll min_cost = mst(1 , v);
if(min_cost == -1)
{
    printf("Case #%d : No way\n",++no);
    memset(edges , 0 , sizeof(edges));
    vis.clear();
    mark.clear();
    return;
}
/*
ll second_min = second_mst(1 , v);
if(second_min < min_cost)
{
    printf("Case #%d : No second way\n",++no);
    memset(edges , 0 , sizeof(edges));
    vis.clear();
    mark.clear();
    return;
}
else{
     printf("Case #%d : %d\n",++no,second_min);
     memset(edges , 0 , sizeof(edges));
     vis.clear();
     mark.clear();
     return;
}
//cout<<"2nd_min: "<<second_min<<'\n';*/
cout<<min_cost<<'\n';
for(int i = 0; i < path.size(); i++)
{
    cout<<"path[i]: "<<path[i]<<'\n';
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

