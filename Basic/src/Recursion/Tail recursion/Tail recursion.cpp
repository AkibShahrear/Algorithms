#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void fun(int n){
if(n == 0)
    return ;
printf("%d ",n);
fun(n - 1); // recursive call is last thing done by function

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    fun(3);
}
