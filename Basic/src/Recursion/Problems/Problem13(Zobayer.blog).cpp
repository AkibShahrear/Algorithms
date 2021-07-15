#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[100];
int mx = 0;
int Linsearch(int i ,int n, int q, int *a)
{
    if(i == n)
    {
        return -1;
    }
    else{
        if(a[i] == q)
        {
            return i;
        }
        Linsearch(i + 1 , n , q , a);
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
        int p = Linsearch(0 , n , x , a);
        if(p == -1)
        {
            cout<<"not found\n";
        }
        else{
            cout<<p<<'\n';
        }
    }

}
