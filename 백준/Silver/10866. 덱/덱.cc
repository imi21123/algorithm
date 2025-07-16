#include <iostream>
#include <deque>
using namespace std;

deque <int> dq;
int n, x;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[15];
		scanf("%s", &str);
		string order = str;

		if (order == "push_front") {
			scanf("%d", &x);
			dq.push_front(x);
		}
		else if (order == "push_back") {
			scanf("%d", &x);
			dq.push_back(x);
		}
		else if (order == "pop_front") {
			if (dq.empty())
				printf("-1\n");
			else {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (dq.empty())
				printf("-1\n");
			else {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		else if (order == "size")
			printf("%d\n", dq.size());
		else if (order == "empty")
			printf("%d\n", dq.empty());
		else if (order == "front") {
			if (dq.empty())
				printf("-1\n");
			else
				printf("%d\n", dq.front());
		}
		else {
			if (dq.empty())
				printf("-1\n");
			else
				printf("%d\n", dq.back());
		}
	}
}