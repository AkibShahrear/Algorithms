#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

ll sum = 0;
ll rev(ll a, ll sum)
{

    int p = a%10;
    sum *= 10;
    sum += p;
    a /= 10;
    if(a == 0)
    {
        return sum;
    }
    else{
      rev(a , sum);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll a;
    cin >> a;
    cout<< rev(a , 0);

    return 0;
}
