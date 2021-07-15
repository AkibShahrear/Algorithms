#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    int n;
    cin >> n;
    vi arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter the key: ";
    cin >> x;

    int k = 0;
    for(int b = n/2; b >= 1; b /= 2){
        while(k + b < n && arr[k + b] <= x) k += b;
    }

    if(arr[k] == x){
        cout<<"x found at index: "<<k + 1<<'\n';
    }
}
