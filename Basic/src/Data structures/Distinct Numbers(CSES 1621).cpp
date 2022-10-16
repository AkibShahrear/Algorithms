#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back



void solve()
{
int n;
cin >> n;
set<int> s;
for(int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    s.insert(x);
}
cout<<s.size()<<endl;
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}
