#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  pair<int , int> pi;
typedef vector<int> vi;
vector<int>subset;
int n;
void search(int k)
{
    if(k == n)
    {
        cout<<"subsets : "<<'\n';
        cout<<"[ ";
        for(int i = 0; i < subset.size(); i++)
        {
            cout<<subset[i]<<","[i == (subset.size()- 1)];
        }
       cout<<"]"<<'\n';
    }
    else{
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();

    }
}
int main()
{
    cin >> n;
    search(0);

    return 0;
}
