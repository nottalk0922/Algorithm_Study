#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int board[502][502] = {};
int vis[502][502];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
	int i,j;
	cin >> n;
	cin >> m;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			cin >> board[i][j];
	
	int cnt = 0; // 그림의 개수
	int mx = 0; // 그림의 넓이의 최댓값
	int area; //그림의 넓이
	 
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(board[i][j] == 0 || vis[i][j]) continue;
			queue<pair<int,int> > Q;
			cnt++;
			vis[i][j] = 1;
			Q.push({i,j});
			area = 0;
			while(!Q.empty()){
				pair<int,int> cur = Q.front(); Q.pop(); area++;
				for(int dir=0; dir<4; dir++){
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];	
					if(nx<0 || nx >= n || ny < 0 || ny >= m) continue;
					if(vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					Q.push({nx,ny});	
				}
			}
			mx = max(area,mx);
		}
	}
	cout << cnt << "\n" << mx;
}
