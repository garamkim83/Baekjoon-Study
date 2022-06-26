#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int visit[10000000];
int f, s, g, u, d;

int bfs() {
	queue<int> q;
	q.push(s);
	visit[s] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == g) return visit[cur] - 1;

		int next[2] = { cur + u,cur - d };
		for (int i = 0; i < 2; i++) {
			if (1 <= next[i] && next[i] <= f && visit[next[i]] == 0) {
				visit[next[i]] = visit[cur] + 1;
				q.push(next[i]);
			}
		}
	}
	return -1;
}

int main() {
	cin >> f >> s >> g >> u >> d;
	int res = bfs();
	if (res == -1) cout << "use the stairs";
	else cout << res;

	return 0;
}