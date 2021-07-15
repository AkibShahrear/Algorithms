#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[10];
void order(int i,int j, int *n, int *a)
{
  if(i == *n)
  {
      *n = j;
      return;
  }
  if(a[i] % 2 == 0) a[j++] = a[i];
  order(i + 1, j , n , a);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    order(0 , 0, &n , a);
    for(int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
