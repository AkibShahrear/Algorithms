#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
int dx[] = {1 , -1, 0 , 0};
int dy[] = {0 , 0,1, -1};
int arr[1010][1010];
int mp[1010][1010];
int vis[1010][1010];

 int r , c;
vector<int> v;
int cnt = 1;
int bfs(int enemyx ,int enemyy,int myx,int myy)
{
    queue<pi>q;
    q.push({enemyx,enemyy});
    vis[enemyx][enemyy] = 1;
    while(!q.empty())
    {
        cnt++;
        int topx = q.front().first;
        int topy = q.front().second;
        //cout<<"topx: "<<topx<<'\n';
        //cout<<"topy: "<<topy<<'\n';
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int x = dx[i] + topx;
            int y = dy[i] + topy;
            if(vis[x][y] != 1 && arr[x][y] != -1 && (x >= 0 && x < r) && (y >= 0 && y < c))
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
    while(scanf("%d%d",&r,&c))
    {
       //cout<<"r: "<<r<<" c: "<<c<<'\n';
       /*for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                arr[i][j] = 0;
            }
        }*/

        if(r == 0 && c == 0)
        {
            break;
        }
        memset(arr , 0 , sizeof(arr));
        memset(vis,0,sizeof(arr));
        memset(mp,0,sizeof(mp));
        int bomb_des;
        cin >> bomb_des;
        for(int i = 0; i < bomb_des; i++)
        {
            int row;
            cin >> row;
            int col_num;
            cin >> col_num;
            for(int j = 0; j < col_num; j++)
            {
                int x;
                cin >> x;
                arr[row][x] = -1;
            }
        }

        int enemyx,enemyy;
        cin >> enemyx >> enemyy;
        int myx , myy;
        cin >> myx >> myy;
        cout<<bfs(enemyx,enemyy,myx,myy)<<'\n';
    }

}


int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}

