///   BISMILLAHIR RAHMANIR RAHEEM
///   SO REMEMBER ME; I WILL REMEMBER YOU   (Surah Al-Baqarah 2:152)
///   THERE ISN'T ANY SHORTCUTS TO ANY PLACE WORTH GOING
///   YOU COULD NEVER CROSS THE OCEAN UNTIL YOU HAVE THE COURAGE TO LOSE SIGHT OF THE SHORE
///   ACTIONS SPEAK LOUDER THAN WORDS

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
#define all(x) (x).begin(),(x).end()
int gcd(int a , int b)
{
    if(a%b == 0) return b;
    else{
        return gcd(b , a%b);
    }
}

int prtn(int a[], int si , int ei)
{
    int cnt_smaller = 0;
    for(int i = si + 1; i <= ei; i++)
    {
        if(a[i] <= a[si])
        {
            cnt_smaller++;
        }
    }
    int pos = si + cnt_smaller;
    swap(a[si] , a[pos]);
    if(pos != si)
    {
        int i = si;
        int j = ei;
        while(i < pos && pos < j)
        {
            if(a[i] <= a[pos])
            {
                i++;
            }
            else if(a[j] > a[pos])
            {
                j--;
            }
            else{
                swap(a[i] , a[j]);
            }
        }
    }
    return pos;
}

void quick_sort(int a[] , int si , int ei)
{
    if(si >= ei)
    {
        return;
    }
    int c = prtn(a , si , ei);
    quick_sort(a , si , c - 1);
    quick_sort(a , c + 1 , ei);
}

void solve()
{
int n;
cin >> n;
int a[n + 1];
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
quick_sort(a , 0 , (n - 1));
for(int i = 0; i < n; i++)
{
    cout<<a[i]<<' ';
}
cout<<'\n';
}

int main(int argc,char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    //int t;
    //cin >> t;

    //while(t--){
    solve();
    //}

    return 0;
}


