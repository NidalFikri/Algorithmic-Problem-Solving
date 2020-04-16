#include <bits/stdc++.h>
using namespace std;

char grid[30][30];
int visited [30][30];
int cnt = 0,dim;

void DFS (int y, int x)
{
//	123
//	4#5
//	678
	if (grid[y][x] == '0' || y > dim-1 || y < 0 || x > dim-1 || x < 0 || visited[y][x]) return;

	visited[y][x] = 1;

	DFS(y-1,x);		//top
	DFS(y,x-1);		//left
	DFS(y,x+1);		//right
	DFS(y+1,x);		//bot
	DFS(y-1,x+1);	//top right
	DFS(y-1,x-1);	//top left
	DFS(y+1,x+1);	//bot right
	DFS(y+1,x-1);	//bot left
}


int main(int argc, char *argv[]) {
	int number = 1;
		while (cin >> dim)
		{
			memset(&visited,0,sizeof(visited));
			cnt = 0;

			for (int i = 0 ; i < dim ; i++)
			{
				for (int j = 0 ; j < dim ; j++) cin >> grid[i][j];
			}

			for (int i = 0 ; i < dim ; i++)
			{
				for (int j = 0 ; j < dim ; j++)
				{
					if (grid[i][j] == '1' && !visited[i][j])
					{
						DFS(i,j);
						cnt++;
					}
				}
			}

			cout<<"Image number "<<number<<" contains "<<cnt<<" war eagles."<<endl;
			number++;
		}
	return 0;
}



