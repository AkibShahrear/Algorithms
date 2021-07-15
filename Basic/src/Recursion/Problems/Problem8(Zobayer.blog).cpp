#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int sum = 0;
int isPrime(int j , int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(j*j <= n)
    {
        if(n%j == 0) return 0;
        isPrime(j + 1 , n);
    }
    else{
        return 1;
    }
}
int main()
{
    int  n;
    cin  >> n;
    if(isPrime(2 , n) == 0)
    {
        cout<<"not prime\n";
    }
    else{
        cout<<"prime\n";
    }


}
