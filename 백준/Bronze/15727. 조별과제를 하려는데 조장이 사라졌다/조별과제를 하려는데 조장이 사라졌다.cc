#include <iostream>
using namespace std;

int main() {
	int l;
	scanf("%d", &l);
	if (l % 5 == 0)
		printf("%d", l / 5);
	else
		printf("%d", l / 5 + 1);
}