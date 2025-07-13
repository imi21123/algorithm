#include <iostream>
using namespace std;

int main() {
	int h1, m1, s1, h2, m2, s2;
	int h, m, s;
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
		if (s2 - s1 < 0) {
			m2 -= 1;
			s = s2 + 60 - s1;
			if (m2 - m1 < 0) {
				h2 -= 1;
				m = m2 + 60 - m1;
				h = h2 - h1;
				printf("%d %d %d\n", h, m, s);
			}
			else {
				m = m2 - m1;
				h = h2 - h1;
				printf("%d %d %d\n", h, m, s);
			}
		}
		else {
			s = s2 - s1;
			if (m2 - m1 < 0) {
				h2 -= 1;
				m = m2 + 60 - m1;
				h = h2 - h1;
				printf("%d %d %d\n", h, m, s);
			}
			else {
				m = m2 - m1;
				h = h2 - h1;
				printf("%d %d %d\n", h, m, s);
			}
		}
	}
	return 0;
}