#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void odd();
void even();
int n = 1;
void odd(){
if(n <= 10){
    cout<<n+1<<" ";
    n++;
    even();
}
return;
}
void even(){
if(n <= 10){
    cout<<n-1<<" ";
    n++;
    odd();
}
return;
}
int main()
{
    odd();
}
