#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int n , k;
void solve()
{
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() ,a.end());
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        int x , y;
        cin >> x >> y;
        int cnt1 = 0 , cnt2 = 0;
        //cout<<"a[3]: "<<a[2]<<'\n';
          int p = -1;
          int q = n;
          while(p + 1 < q)
          {
           int mid = p + (q - p)/2;
           if(a[mid] >= x)
            {
              q = mid;
            }
           else{
              p = mid;
              }
            }
          cnt1 = p;
        int l = -1;
        int r = n ;
        while(l + 1 < r)
        {
        int mid = l + (r - l)/2;
        if(a[mid] <= y)
        {
            l = mid;
        }
        else{
            r = mid;
         }
        }
       if(a[r] == y)
      {
         r++;
      }
       cnt2 = r;
       //cout<<"p: "<<p<<" r: "<<r<<'\n';
        cout<<r - p - 1<<' ';
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
