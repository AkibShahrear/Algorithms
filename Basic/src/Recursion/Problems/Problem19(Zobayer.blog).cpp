#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
vi Inord;
void Inorder(int n)
{
    if(n == 1|| n == 2)
    {
        cout<<" "<<n;
        return;
    }
    else{

       Inorder(n - 2); //call left child
       cout<<" "<<n; //call root;
       Inorder(n - 1); //call right child;

    }

}

void preorder(int n)
{
    if(n == 1|| n == 2)
    {
        cout<<" "<<n;
        return;
    }
    else{
       cout<<" "<<n; //call root;
       preorder(n - 2); //call left child
       preorder(n - 1); //call right child;

    }

}
void postorder(int n)
{
    if(n == 1|| n == 2)
    {
        cout<<" "<<n;
        return;
    }
    else{
       postorder(n - 2); //call left child
       postorder(n - 1); //call right child;
       cout<<" "<<n; //call root;
    }

}

int main()
{
    int n;
    cin >> n;
    cout<<"Inorder: ";
    Inorder(n);
    cout<<"\nPreorder: ";
    preorder(n);
    cout<<"\nPostorder: ";
    postorder(n);

    return 0;
}
