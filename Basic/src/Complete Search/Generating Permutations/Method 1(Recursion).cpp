#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;

bool chosen[1000];
int n;
vector<int>permutation;
void search() {
if(permutation.size() == n){
     cout<<"{ ";
    for(int i = 0; i < permutation.size(); i++)
    {
        cout<<permutation[i]<<","[i == (permutation.size() - 1)];
    }
    cout<<"}\n";
} else {
for(int i = 0; i < n; i++){
    if(chosen[i]) continue;
    chosen[i] = true;
    permutation.push_back(i);
    search();
    chosen[i] = false;
    permutation.pop_back();
}

}

}


int main()
{
cin >> n;
search();


    return 0;
}
