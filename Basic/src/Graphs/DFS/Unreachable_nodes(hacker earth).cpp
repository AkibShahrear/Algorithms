#include <bits/stdc++.h>
using namespace std;
vector<int> edges[100010];
bool visited[100010];
void dfs(int head)
{
	visited[head] = 1;
	for(auto i : edges[head])
	{
		if(visited[i] == 0)
		{
			dfs(i);
		}
	}
}
int main() {
	int N , M;
	cin >> N >> M;    //Reading input from STDIN
	for(int i = 0; i < M; i++)
	{
		int x , y;
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	int p;
	cin >> p;
	dfs(p);
	int cnt = 0;
	for(int i = 1; i<= N; i++)
	{
		if(visited[i] == 0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	memset(edges , 0 , sizeof(edges));
	memset(visited , 0 , sizeof(visited));
}
