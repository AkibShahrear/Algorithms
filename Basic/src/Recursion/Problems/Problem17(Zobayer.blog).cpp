#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

bool isPal(int i,int n, string s)
{
    if(i > n)
    {
        return 1;
    }
    if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9'))
       {
           if((s[n] >= 'a' && s[n] <= 'z')||(s[n] >= 'A' && s[n] <= 'Z')||(s[n] >= '0' && s[n] <= '9'))
              {
               if(s[i] != s[n])
                    {
                        return 0;
                    }
                else{
                    return isPal(i+1 , n-1 , s);
                }
              }
              else{
                 return isPal(i , n-1 , s);
              }
       }
       else{
        return isPal(i+1 , n, s);
       }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin,s);
    int n = s.length();
    if(isPal(0 , n - 1 ,s) == 0)
    {
        cout<<"not palindromic";
    }
    else{
        cout<<"palindromic";
    }

    return 0;
}
