#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[100];
int mx = 0;
int Binsearch(int i ,int n, int q, int *a)
{
    int m = i + (n - i)/2;
    //cout<<"m: "<<m<<'\n';
    if(i > n)
    {
        return -1;
    }
     if(a[m] == q)
    {
        return m;
    }
   else if(a[m] > q)
   {
    return Binsearch(i , m - 1 , q , a);
   }
   else if(a[m] < q)
   {
    return Binsearch(m + 1 , n , q , a);
   }


}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        int p = Binsearch(0 , n , x , a);
        if(p == -1)
        {
            cout<<"not found\n";
        }
        else{
            cout<<p<<'\n';
        }
    }

}
