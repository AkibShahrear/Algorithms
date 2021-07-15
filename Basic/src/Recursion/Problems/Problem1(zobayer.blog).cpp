#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
vi v;
void rev(int i , int n, int *arr)
{
    if(i < n)
    {
        rev(i + 1 , n , arr);
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int n , i , arr[10];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev(0 , n , arr);
}
