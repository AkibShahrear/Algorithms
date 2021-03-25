#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i] , arr[j]);  //Inversion ==> indicates how much work is needed to sort the array
            }
        }
    }

    cout<<"sorted: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* Another way is:

for(int i = 0; i < n; i++)
{
   for(int j = 0; j < n -1; j++)
   {

   if(arr[j] > arr[j + 1])
   {
   swap(arr[j], arr[j + 1]);
   }

   }
}


