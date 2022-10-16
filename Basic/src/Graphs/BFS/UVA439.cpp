#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
int dx[] = {1 , 2, 1 , -1,-2 ,-2 , -1,2};
int dy[] = {2 , 1, -2, -2 , -1 , 1 , 2,-1};
int mp[101][101];
int vis[101][101];

 int r , c;
vector<int> v;
int cnt = 1;
int bfs(int enemyx ,int enemyy,int myx,int myy)
{
    queue<pi>q;
    q.push({enemyx,enemyy});
    int cnt  = 0;
    if(enemyx == myx && enemyy == myy)
    {
        return cnt;
    }
    vis[enemyx][enemyy] = 1;
    while(!q.empty())
    {
        int topx = q.front().first;
        int topy = q.front().second;
        //cout<<"topx: "<<topx<<'\n';
        //cout<<"topy: "<<topy<<'\n';
        q.pop();
        for(int i = 0; i < 8; i++)
        {
            int x = dx[i] + topx;
            int y = dy[i] + topy;
            if(vis[x][y] != 1  && (x >= 0 && x < 8) && (y >= 0 && y < 8))
                {
                    //cout<<"x: "<<x<<'\n';
                    //cout<<"y: "<<y<<'\n';
                    int d = mp[topx][topy] + 1;
                     if(x == myx && y == myy)
                     {
                         //cout<<"found! cnt: "<<cnt<<'\n';
                         //q.clear();
                         return d;
                     }
                     mp[x][y] = d;
                     vis[x][y] = 1;
                     q.push({x , y});
                }
        }
    }
}


void solve()
{
   string s1 , s2;
   while(cin >> s1 >> s2){
       memset(mp , 0, sizeof(mp));
       memset(vis , 0 , sizeof(vis));
       int src1 = s1[0] - 'a';
       int src2 = s1[1] - 48;
       int des1 = s2[0] - 'a';
       int des2 = s2[1] - 48;
       //cout<<src1<<' '<<src2<<'\n';
       //cout<<des1<<' '<<des2<<'\n';
       des2--;
       src2--;
       cout<<"To get from "<<s1<<" to "<<s2;
       printf(" takes %d knight moves.\n",bfs(src2 , src1, des2 , des1));
   }
}


int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}


