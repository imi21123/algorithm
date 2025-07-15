#include <iostream>
using namespace std;

int Front, Back, Queue[10001];
bool empty() {
	if (Front == Back)
		return true;
	else
		return false;
}
int front() {
	if (empty())
		return -1;
	else
		return Queue[Front];
}
int back() {
	if (empty())
		return -1;
	else
		return Queue[Back - 1];
}
void push(int x) {
	Queue[Back++] = x;
}
int pop() {
	int tmp = front();
	if (tmp > 0)
		Queue[Front++] = false;
	return tmp;
}
int size() {
	return Back - Front;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[10];
		scanf("%s", &str);

		string order = str;
		if (order == "push") {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (order == "empty")
			printf("%d\n", empty());
		else if (order == "front")
			printf("%d\n", front());
		else if (order == "back")
			printf("%d\n", back());
		else if (order == "pop")
			printf("%d\n", pop());
		else
			printf("%d\n", size());
	}
}