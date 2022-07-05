#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int n, m;
int map[9][9];
int temp[9][9];
int virus = 0, wall = 0;
int ans;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
vector<pair<int, int>> way; // ��ǥ ����
queue<pair<int, int>> q;

int BFS() {
	bool visit[9][9];
	// �湮 �ʱ�ȭ
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			visit[i][j] = false;

	int cnt = virus; // ������ ���� ũ��

	// ���̷��� ��ǥ�� ť�� ����
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (map[i][j] == 2) q.push({ i,j });

	while (!q.empty())
	{
		int now_x = q.front().first;
		int now_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int next_x = now_x + dx[i];
			int next_y = now_y + dy[i];

			// �������� ����� pass
			if (next_x < 1 || next_x > n || next_y < 1 || next_y > m)
				continue;

			// �湮���� ���� ���̶��
			if (!visit[next_x][next_y] && map[next_x][next_y] == 0)
			{
				q.push({ next_x ,next_y });
				visit[next_x][next_y] = true;
				cnt++;
			}
		}
	}

	// ��üũ�� - (������ ���� + �� ���� + 3)
	return n * m - (cnt + wall + 3);
}

void buildWall(int cnt) {
	if (cnt == 3) {
		BFS();
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (temp[i][j] == 0) {
				temp[i][j] = 1;
				buildWall(cnt + 1);
				temp[i][j] = 0;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) wall++;
			else if (map[i][j] == 2) virus++;
		}
	}

	cout << ans;

	return 0;
}