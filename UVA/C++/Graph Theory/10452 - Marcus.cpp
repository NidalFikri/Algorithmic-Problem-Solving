#include <bits/stdc++.h>
using namespace std;

int test, m,n;
char graph [10][10];
int visited [10][10];
string target = "@IEHOVA#";
int idx = 0;

void DFS (int y, int x,string direction)
{
	if (graph[y][x] != target[idx] || idx > 7 || visited[y][x] || x>n-1 || x <0 || y>m-1 || y<0)	return ;

	visited[y][x] = 1;
	if (target[idx] != '@' && idx != 7) cout<<direction<<" ";
	else if (target[idx] != '@' && idx == 7) cout<<direction;
	idx++;

	DFS(y-1,x,"forth");
	DFS(y,x+1,"right");
	DFS(y,x-1,"left");

}

int main(int argc, char *argv[]) {

	pair <int,int> start;
	cin >> test;

	while (test--)
	{
		cin >> m >> n ;

		memset(&visited,0,sizeof(visited));
		idx = 0 ;

		for(int i = 0 ; i < m ; i++)
		{
			for (int j = 0 ; j < n ; j++)
			{
				cin >> graph[i][j];
				if (graph[i][j] == '@') {start.second=i;start.first=j;}
			}
		}

		DFS(start.second,start.first,"");
		cout<<endl;
	}

	return 0;
}
