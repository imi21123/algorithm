#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if (b + c >= 60)
		printf("%d %d", (a + ((b + c) / 60)) % 24, (b + c) % 60);
	else
		printf("%d %d", a, b + c);
}