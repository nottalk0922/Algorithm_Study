/*
BFS 
board[][]에 1이 있는 곳만 이동 할 수 있다.
vis[][] => 방문을 했다는 표시를 남기기 위함
n , m = 행과 열 
dx,dy => 상하좌우로 이동하기 위함
pair<>를 사용해 두개의 변수를 저장함
 
 */


#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} };
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
	queue<pair<int,int> > Q;
	vis[0][0] = true;
	Q.push({0,0});
	while(!Q.empty()){
		pair<int,int> cur = Q.front(); Q.pop();
		cout << '(' << cur.X << ", " << cur.Y << ") -> ";
		for(int dir=0; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if(nx<0 || nx >= n || ny < 0 || ny >= m) continue;
			if(vis[nx][ny] || board[nx][ny] != 1) continue;
			vis[nx][ny] = 1;
			Q.push({nx,ny});	
		}
	}
}	

