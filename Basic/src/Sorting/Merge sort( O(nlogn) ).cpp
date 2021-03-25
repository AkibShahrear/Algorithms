#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void merge(int arr[], int l ,int m, int r){
int p = m - l + 1;

int q = r - m;

int L[p] , R[q];

for(int i = 0; i < p; i++)
{
    L[i] == arr[l + i];
}
for(int j = 0; j < q; j++)
{
    R[j] = arr[m + 1 + j];
}

int i = 0, j = 0 , k = 0;

while(i < p && j < q)
{
    if(L[i] <= R[j]){
        arr[k] = L[i];
        i++;
    }
    else{
        arr[k] = R[j];
        j++;
    }
    k++;
}

while(i < p){
    arr[k] = L[i];
    i++;
    k++;
}

while(j < q){
    arr[k] = R[j];
    j++;
    k++;
}

}


void mergeSort(int arr[] ,int l ,int r)
{
    if(l >= r)
    {
        return;
    }

    int mid = l + (r - l) / 2;

    mergeSort(arr, l , mid);

    mergeSort(arr , mid + 1, r);

    merge(arr, l , mid ,r);



}
