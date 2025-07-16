#include <iostream>
#include <deque>
using namespace std;

int n, k, m;
deque <int> dq;
void ctrclockwise(int kcnt, int mcnt);
void clockwise(int kcnt, int mcnt) {
	if (dq.empty())
		return;
	if (kcnt == k) {
		printf("%d\n", dq.front());
		dq.pop_front();
		if (mcnt + 1 == m)
			ctrclockwise(1, 0);
		else
			clockwise(1, mcnt + 1);
	}
	else {
		dq.push_back(dq.front());
		dq.pop_front();
		clockwise(kcnt + 1, mcnt);
	}
	return;
}
void ctrclockwise(int kcnt, int mcnt) {
	if (dq.empty())
		return;
	if (kcnt == k) {
		printf("%d\n", dq.back());
		dq.pop_back();
		if (mcnt + 1 == m)
			clockwise(1, 0);
		else
			ctrclockwise(1, mcnt + 1);
	}
	else {
		dq.push_front(dq.back());
		dq.pop_back();
		ctrclockwise(kcnt + 1, mcnt);
	}
	return;
}

int main() {
	scanf("%d %d %d", &n, &k, &m);
	for (int i = 1; i <= n; i++)
		dq.push_back(i);
	clockwise(1, 0);
}