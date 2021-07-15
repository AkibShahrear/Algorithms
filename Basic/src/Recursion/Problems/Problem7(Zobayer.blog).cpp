#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int sum = 0;
int fib(int n)
{
    if(n == 1)
        return  1;
    if(n == 2)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}
int main()
{
    int  n;
    cin  >> n;
    cout<<fib(n);


}
