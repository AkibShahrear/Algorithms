#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[10];
void order(int i, int n, int *a)
{
    if(i < (n - i + 1))
    {
        cout<<a[i]<<" "<<a[n - i]<<'\n';
        order(i + 1 , n , a);
    }
    else{
        return;
    }
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
    order(0 , (n - 1) , a);
    return 0;
}
