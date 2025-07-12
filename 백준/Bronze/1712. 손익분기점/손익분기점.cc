#include <iostream>
using namespace std;

int main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	if (b < c)
		printf("%lld", (a / (c - b)) + 1);
	else
		printf("-1");
}