#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	double price;
	for (int i = 0; i < t; i++) {
		scanf("%lf", &price);
		printf("$%.2lf\n", price * 0.8);
	}
}