#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
double fun(double x)
{
    return (((x * x) + sqrt(x)));
}
void solve()
{
    double c;
    cin >> c;
    double l = 0 , r = 1e6;
    for(int i = 0; i <= 100; i++)
    {
        double m = l + (r - l)/2;
         if(fun(m) > c)
        {
            r = m;
        }
        else{
            l = m;
        }
    }
printf("%0.20lf",l);


}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
