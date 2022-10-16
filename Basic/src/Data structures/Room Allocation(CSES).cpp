#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back


map<int , int> mp;
void solve()
{
int n;
cin >> n;
vector<pi> p;
for(int i = 0; i < n; i++)
{
    int x , y;
    cin >> x >> y;
    p.pb({x , y});
}
sort(p.begin(),p.end());
for(int i = 0; i < p.size(); i++)
{

}
}

int main(int argc , char ** argv)
{
    //ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}


