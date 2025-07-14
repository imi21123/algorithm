#include <iostream>
using namespace std;

int main() {
	int n[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		if (n[i] < 40)
			n[i] = 40;
		sum += n[i];
	}
	printf("%d", sum / 5);
}