#include <iostream>
#include <map>
using namespace std;

int n, m;
string str, q;
map <string, string> ma;

string trans(int h) {
	string ret = "";
	while (h > 0) {
		char now = h % 10 +48;
		ret = now + ret;
		h /= 10;
	}
	return ret;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		ma.insert({ trans(i), str });
		ma.insert({ str, trans(i) });
	}
	for (int i = 0; i < m; i++) {
		cin >> q;
		cout << ma[q] << "\n";
	}
}