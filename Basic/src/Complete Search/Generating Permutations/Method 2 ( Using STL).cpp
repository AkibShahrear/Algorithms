#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>permutation;
    for(int i = 0; i < n; i++)
    {
        permutation.push_back(i);
    }
    do{
        for(int i = 0; i < n; i++)
    {
        cout<<permutation[i]<<" ";
    }
    cout<<'\n';
    }while(next_permutation(permutation.begin(), permutation.end()));
    return 0;
}
