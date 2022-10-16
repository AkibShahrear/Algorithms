#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
map<string , int>mp;

void solve()
{
mp["Mildred"] = 0;
mp["Elsie"] = 0;
mp["Bessie"] = 0;
int n;
cin >> n;
vector<pi> v;
vi x(n), y(n);
vector<string>str;
for(int i = 0; i < n; i++)
{
    string s;
    cin >> x[i] >> s >> y[i];
    str.pb(s);
    v.pb({x[i] , i});
}
sort(v.begin() , v.end());
int mx = 0;
int cnt = 0;
int cmpttr = 0;
string last = "";
for(int i = 0; i < v.size(); i++)
{
    int l = v[i].second;
    mp[str[l]] += y[l];
    //cout<<"mx: "<<mx<<" mp[str[l]]: "<<mp[str[l]]<<'\n';
    int p = max(mp["Mildred"],mp["Elsie"]);
        p = max(p ,mp["Bessie"]);
    int now =  (mp["Mildred"] == mx) + (mp["Elsie"] == mx) + (mp["Bessie"] == mx);
        if(i == 0)
        {
            cnt++;
            cmpttr = now;
            if(mp["Miltred"] == p)
            {
                last += "Miltred";
            }
            else if(mp["Elsie"] == p)
            {
                last += "Elsie";
            }
            else if(mp["Bessie"] == p)
            {
                last += "Bessie";
            }
        }
        if(now != cmpttr)
        {
            cmpttr = now;
            cnt++;
        }
        else{
           string str2 = "";
           if(mp["Miltred"] == p)
            {
                str2 += "Miltred";
            }
            else if(mp["Elsie"] == p)
            {
                str2 += "Elsie";
            }
            else if(mp["Bessie"] == p)
            {
                str2 += "Bessie";
            }
           if(last != str2)
           {
               cnt++;
               last = str2;
           }
        }
    }


cout<<cnt;
}

int main(int argc, char ** argv)
{
    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);

    solve();

    return 0;
}


