#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int lcm(int n ,int m, int j)
{
  if(n*j % m == 0) return n*j;
  return lcm(n , m , j + 1);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int x , y;
    cin >> x >> y;
    int p = y/x;
    cout<<lcm(x , y, p);
}
