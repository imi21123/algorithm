#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, cnt = 0;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
bool visit[25][25] = { false, };
string arr[25];
vector <int> ans;
void dfs(int i, int j) {
	visit[i][j] = true;
	cnt++;
	for (int k = 0; k < 4; k++) {
		int newx = j + dx[k];
		int newy = i + dy[k];
		if (0 <= newx && newx < n && 0 <= newy && newy < n)
			if (arr[newy][newx] == '1' && !visit[newy][newx])
				dfs(newy, newx);
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[i][j] == '1' && !visit[i][j]) {
				cnt = 0;
				dfs(i, j);
				ans.push_back(cnt);
			}
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << "\n";
	return 0;
}