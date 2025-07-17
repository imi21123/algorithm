#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, x;
priority_queue <int> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty())
				cout << "0\n";
			else {
				//우선순위 큐는 들어간 순서에 상관없이 우선순위가 높은 데이터가 먼저 나옴
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
}