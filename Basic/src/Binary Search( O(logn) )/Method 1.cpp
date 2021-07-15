#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
int n;
cin >> n;
vi arr(n);

for(int i = 0; i < n; i++)
{
    cin >> arr[i];
}
sort(arr.begin() , arr.end());

int x;
cout << "Enter the Key: ";
cin >> x;

int a = 0, b = n - 1;

while(a <= b){
int mid_element = (a + b)/2;
if(arr[mid_element] == x){
    cout<<"x is found at index: "<<mid_element + 1<<'\n';
    return 0;
}

if(arr[mid_element] > x) b = mid_element - 1;
else a = mid_element + 1;
}
}
