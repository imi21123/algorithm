#include <iostream>
#include <stack>
using namespace std;

int n, num;
stack <int> Stack;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[10];
		scanf("%s", &str);
		string order = str;
		if (order == "push") {
			scanf("%d", &num);
			Stack.push(num);
		}
		else if (order == "pop") {
			if (Stack.empty())
				printf("-1\n");
			else {
				printf("%d\n", Stack.top());
				Stack.pop();
			}
		}
		else if (order == "size")
			printf("%d\n", Stack.size());
		else if (order == "empty")
			printf("%d\n", Stack.empty());
		else {
			if (Stack.empty())
				printf("-1\n");
			else
				printf("%d\n", Stack.top());
		}
	}
}