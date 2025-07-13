#include <iostream>
using namespace std;

int main() {
	int d, h, m;
	scanf("%d %d %d", &d, &h, &m);
	if (m - 11 < 0) {
		h -= 1;
		m = m + 60 - 11;
		if (h - 11 < 0) {
			d -= 1;
			h = h + 24 - 11;
			d = d - 11;
		}
		else {
			h -= 11;
			d -= 11;
		}
	}
	else {
		m -= 11;
		if (h - 11 < 0) {
			d = -1;
			h = h + 24 - 11;
			d = d - 11;
		}
		else {
			h -= 11;
			d -= 11;
		}
	}
	int time = d * 24 * 60 + h * 60 + m;
	if (time < 0)
		printf("-1");
	else
		printf("%d", time);
}