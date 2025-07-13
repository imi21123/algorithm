#include <iostream>
using namespace std;

int main() {
	int a, b, i, j, k;
	scanf("%d", &a);
	scanf("%d", &b);
	i = b % 100 % 10;
	j = b % 100 / 10;
	k = b / 100;
	printf("%d\n%d\n%d\n%d", a * i, a * j, a * k, a *i + a * j * 10 + a * k * 100);
}