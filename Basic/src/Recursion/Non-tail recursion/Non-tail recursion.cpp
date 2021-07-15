#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void fun(int n){
if(n == 0)
    return ;
fun(n - 1);
printf("%d ",n);  // there is some thing to evaluate
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    fun(3);
}
