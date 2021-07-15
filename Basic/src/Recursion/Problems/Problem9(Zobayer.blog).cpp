#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int gcd(int a , int b)
{
    if(a % b == 0) return b;
    else
        return gcd(b , a%b);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int x , y;
    cin >> x >> y;
    cout<<gcd(x , y);
}
