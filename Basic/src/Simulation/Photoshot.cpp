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
vi b(n - 1),a;
for(int i = 0; i <(n - 1); i++)
{
    cin >> b[i];
}
for(int i = 1; i <= n; i++)
{
    a.pb(i);
}
do{
  int cnt = 0;
  for(int i = 0; i < (n - 1); i++)
  {
      if(a[i] + a[i + 1] != b[i])
      {
          cnt = 1;
          break;
      }
  }
  if(cnt == 0)
  {
  for(int i = 0; i < n; i++)
  {
      cout<<a[i]<<' ';
  }
  break;
  }
}while(next_permutation(a.begin(),a.end()));
}

int main(int argc, char ** argv)
{

     freopen("photo.in","r",stdin);
     freopen("photo.out","w",stdout);

     solve();

    return 0;
}



