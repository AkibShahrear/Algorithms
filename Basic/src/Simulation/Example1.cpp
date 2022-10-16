#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
int r , s;
cin >> r >> s;
int m , n , p , q;
cin >> m >> n >> p >> q;
bool is = 0;
int time = 0;
int x  = 0 , y = 0;
while(true)
{
    x += m;
    y += n;
    r -= p;
    s -= q;
    time++;
    if(x > r || y > s)
    {
        cout<<-1;
        return;
    }
    if(x == r && y == s)
    {
        cout<<time<<'\n';
        return;
    }

}
}

int main(int argc, char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
     solve();
    }
    return 0;
}


