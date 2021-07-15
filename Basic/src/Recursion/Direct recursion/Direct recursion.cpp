#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int fun(int n)
{
    if(n == 1)
        return 1;
    else
        return 1 + fun(n -1);
}
int main()
{
    int n =3;
    fun(n);
}
