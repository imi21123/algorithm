#include <iostream>
#include <set>
using namespace std;

int n, a, b;
set <pair <int, int>> s;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> a >> b;
	for (int i = 0, x, y; i < n; i++) {
		cin >> x >> y;
		s.insert({ x, y });
	}

	int ans = 0;
	for (auto i : s) {
		//(x + a, y), (x, y + b), (x + a, y + b) 이 세 점이 존재한다면 직사각형을 만들 수 있다
		//s.count()는 해당 원소가 존재한다면 int값을 return
		if (s.count({ i.first + a, i.second }) && s.count({ i.first, i.second + b }) && s.count({ i.first + a, i.second + b }))
			ans++;
	}
	cout << ans;
}