#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, x;
priority_queue <int, vector <int>, greater <int>> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 0) {
			if (pq.empty())
				cout << "0\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
}