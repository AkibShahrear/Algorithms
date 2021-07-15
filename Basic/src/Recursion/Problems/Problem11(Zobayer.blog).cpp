#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[100];
int mx = 0;
int maximum(int i ,int n, int *a)
{
if(i == n)
{
    return mx;
}
else{
    mx = max(mx , a[i]);
    return maximum(i + 1 , n , a);
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
    cout<<maximum(0 , n ,a);
}
