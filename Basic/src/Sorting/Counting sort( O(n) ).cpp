//Counting sort is very useful when the range is small enough
//Bookkeeping array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[1000010];
int main()
{
    int n;
    cin >> n;
    vi v(n);

    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        a[v[i]]++;
        if(mx < v[i])
        {
            mx = v[i];
        }
    }
    int output[200];
    for(int i = 1; i <= mx; i++)
    {
        //cout<<"a[i]: "<<a[i]<<'\n';
        a[i] += a[i - 1];
        //cout<<" new a[i]: "<<a[i]<<'\n';
    }
    for(int i = n - 1; i >= 0; i--)
    {
       // cout<<"a[v[i] - 1 : "<<a[v[i]] - 1<<'\n';
        output[a[v[i]] - 1] = v[i];
        a[v[i]]--;
    }
    int arr[500];
    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    //int mn = *min_element(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
            cout<<arr[i]<<" ";
    }
}
