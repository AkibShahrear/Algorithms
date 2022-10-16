#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
vi c(3) , m(3);
for(int i = 0; i < 3; i++)
{
    cin >> c[i] >> m[i];
}
int j = 0;
for(int i = 0; i < 100; i++)
{
    int need = c[(j + 1)%3] - m[(j + 1)%3];
    int take = min(need , m[j%3]);
    m[j%3] -= take;
    m[(j + 1)%3] += take;
    j++;
    j %= 3;
}
for(int i = 0; i < 3; i++)
{
    cout<<m[i]<<'\n';
}

}

int main(int argc, char ** argv)
{
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
     solve();

    return 0;
}


