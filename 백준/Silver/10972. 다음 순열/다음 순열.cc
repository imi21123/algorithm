#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, a, i;
	scanf("%d", &n);
	vector <int> v;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		v.push_back(a);
	}
	if (next_permutation(v.begin(), v.end())) {
		for (i = 0; i < n; i++)
			printf("%d ", v[i]);
	}
	else
		printf("-1");
}