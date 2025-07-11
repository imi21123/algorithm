#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, d, c;
vector <pair <int, int>> condo;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d >> c;
		condo.push_back({ d, c });
	}
	sort(condo.begin(), condo.end());
	
	int cost = 100000, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (condo[i].second < cost) {
			cost = condo[i].second;
			cnt++;
		}
	}
	cout << cnt;
}