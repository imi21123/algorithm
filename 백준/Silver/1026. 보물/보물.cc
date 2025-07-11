#include <iostream>
#include <algorithm>
using namespace std;

int n, a[50], b[50], s;

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &b[i]);
	sort(a, a + n);
	sort(b, b + n);
	reverse(a, a + n);

	for (i = 0; i < n; i++)
		s += (a[i] * b[i]);
	printf("%d", s);
}