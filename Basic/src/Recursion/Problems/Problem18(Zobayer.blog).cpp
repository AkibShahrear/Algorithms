#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
bool is = 0;
char k[100];
string p = "";
string strcat(int i ,string a , string b)
{

int l = a.length();
int m = b.length();
int n = l + m;

if(p.length() == n)
{
    return p;
}
if(i == l && is == 0)
{
    i = 0;
    is = 1;
    p += b[i];
    //cout<<"p: "<<p<<'\n';
}
else if(!is)
{
    p += a[i];
}
else{
    p += b[i];
}
return strcat(i + 1 , a , b);
}

string strcopy(int i , string a , char *k)
{
    int l = a.length();
    if(i == l)
    {
        //cout<<"b: "<<k<<'\n';
        return k;

    }
    k[i] = a[i];
    //cout<<"b[i]: "<<k[i]<<'\n';
    return strcopy(i + 1 , a , k);
}

int main()
{
    string a , b, s;
    cin >> a >> b;
    cout<<strcat(0 , a , b)<<'\n';
    cout<<strcopy(0 , a , k);
}
