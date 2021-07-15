#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

char revstr()
{
   char c;
	scanf("%c", &c);
	if(c!='\n')
		revstr();
	printf("%c", c);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    revstr();

    return 0;
}
