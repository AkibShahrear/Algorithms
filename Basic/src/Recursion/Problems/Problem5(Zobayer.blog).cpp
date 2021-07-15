#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int sum = 0;
int poly(int i ,int x , int n)
{
    if(n == 0)
        return  1;
    if(i < n)
        return pow(x , i) + poly(i + 1 , x , n);
    else{
        return 0;
    }
}
int main()
{
    int x , n;
    cin >> x >> n;
    int sum = poly(0 , x , n);
    cout<<sum;


}
