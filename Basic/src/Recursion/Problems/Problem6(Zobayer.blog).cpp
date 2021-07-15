#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int sum = 0;
int fact(int n)
{
    if(n == 0)
        return  1;
    else
        return n*fact(n - 1);
}
int main()
{
    int  n;
    cin  >> n;
    cout<<fact(n);


}
