#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[10];
void polynomial(int j ,int n)
{
  if(j == n)
  {
      return;
  }
  else{
    if(j == 0)
    {
        cout<<"1 ";
    }
    else if(j == 1)
    {
        cout<<"+ x ";
    }
    else if(j == n - 1)
    {
        if(j == 0){
            return;
        }
        else if(j == 1)
        {
            return;
        }
        else{
            cout<<"+ x^"<<(n - 1);
            return;
        }

    }
    else{
        cout<<"+ x^"<<(j)<<" ";
    }
     polynomial(j+1 , n);
  }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    polynomial(0 , n);
    return 0;
}
