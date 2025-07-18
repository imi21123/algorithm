#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, x;
priority_queue <int, vector <int>, greater <int>> pq_p; //양수는 최소 힙
priority_queue <int> pq_m; //음수는 최대 힙

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 0) {
			if (pq_p.empty() && pq_m.empty()) //둘 다 비어있는 경우
				cout << "0\n";
			else {
				if (pq_p.empty()) { //양수 pq가 비어있는 경우
					cout << pq_m.top() << "\n"; //음수에서 출력
					pq_m.pop();
				}
				else if (pq_m.empty()) { //음수 pq가 비어있는 경우
					cout << pq_p.top() << "\n"; //양수에서 출력
					pq_p.pop();
				}
				else if (pq_p.top() < -pq_m.top()) { //둘 다 비어있지 않고 양수가 더 작은 경우
					cout << pq_p.top() << "\n"; //양수에서 출력
					pq_p.pop();
				}
				else { //둘 다 비어있지 않고 음수가 더 작은 경우
					cout << pq_m.top() << "\n"; //음수에서 출력
					pq_m.pop(); 

				}
			}
		}
		else if (x > 0) //양수인 경우
			pq_p.push(x);
		else { //음수인 경우
			pq_m.push(x);
		}
	}
}