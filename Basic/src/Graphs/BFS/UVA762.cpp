#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
vi edges[1000];
map<string , int>mp;
map<int , int> vis,parent;
map<int , string>str;
bool bfs(int src, int des)
{
    queue<int>q;
    q.push(src);
    //cout<<"mp[src]: "<<str[src]<<'\n';
    vis[src] = 1;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(auto i : edges[top])
        {
            if(vis[i] == 0)
            {
                vis[i] = 1;
                parent[i] = top;
                //cout<<"str[i]: "<<str[i]<<'\n';
                if(i == des)
                {
                    return 1;
                }
                q.push(i);
            }
        }
    }
    return 0;
}



void solve()
{
 int n;
 while(cin >> n)
 {
     int cnt  = 1;
     for(int i = 0; i < n; i++)
     {
         string s1 , s2;
         cin >> s1 >> s2;
         if(mp[s1] == 0)
         {
             mp[s1] = cnt;
             str[cnt] = s1;
             cnt++;
         }
         if(mp[s2] == 0)
         {
             mp[s2] = cnt;
             str[cnt] = s2;
             cnt++;
         }
         edges[mp[s1]].pb(mp[s2]);
         edges[mp[s2]].pb(mp[s1]);
     }
     string src , des;
     cin >> src >> des;
     if(src == des && mp[src] != 0)
     {
         cout<<str[mp[src]]<<' '<<str[mp[des]]<<'\n';
         //return;
     }
     else if(!bfs(mp[src],mp[des])){
        cout<<"No route\n";
     }
     else{
        vector<string>v;
        //cout<<str[mp[des]]<<' ';
        int p = mp[des];
        v.pb(str[p]);
        while(parent[p]>0)
        {
            int g = parent[p];
            //cout<<str[g]<<' ';
            v.pb(str[g]);
            p = g;
        }
        //cout<<"ANSWER: "<<'\n';
        for(int i = v.size() - 1; i > 0; i--)
        {
            cout<<v[i]<<' '<<v[i - 1]<<'\n';
        }
        v.clear();
     }
     mp.clear();
     memset(edges , 0 , sizeof(edges));
     vis.clear();
     parent.clear();
     str.clear();
     cout<<'\n';
 }
}

int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    solve();


    return 0;
}



