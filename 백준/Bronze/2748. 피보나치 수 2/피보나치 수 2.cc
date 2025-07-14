#include <iostream>
using namespace std;

int main() {
	int n;
	long long num[100];
	num[0] = 0;
	num[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i < n + 2; i++)
		num[i] = num[i - 2] + num[i - 1];
	printf("%lld", num[n]);
}