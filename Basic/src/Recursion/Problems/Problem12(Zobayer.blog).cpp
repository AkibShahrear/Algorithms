#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[100];
int f  = 0 , s = 0;
int second(int i , int n, int *a , int f , int s)
{
    if(i == n - 1)
    {
        return s;
    }

    if(a[i] > f)
    {
        s = f;
        f = a[i];
    }
    else if(a[i] > s) s = a[i];
    second(i + 1 , n , a , f , s);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n ;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    s = f = a[0];

    cout<<second(0 , n , a , f , s);;
}
