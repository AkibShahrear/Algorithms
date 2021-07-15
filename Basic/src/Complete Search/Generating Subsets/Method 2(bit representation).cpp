#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
ios::sync_with_stdio(0);
cin.tie();
int n;
cin >> n;
for(int b = 0; b < (1 << n); b++)
{
vector<int>subset;
for(int i = 0; i < n; i++)
{
    if(b & (1<<i)) subset.push_back(i);
}
cout<<"{ ";
for(int i = 0; i < subset.size(); i++)
{
    cout<<subset[i]<<","[i == (subset.size() - 1)];
}
cout<<"}\n";
}


}
