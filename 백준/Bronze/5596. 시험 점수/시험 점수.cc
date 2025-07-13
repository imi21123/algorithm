#include <iostream>
using namespace std;

int main() {
	int si, sm, ss, se, ti, tm, ts, te;
	scanf("%d %d %d %d", &si, &sm, &ss, &se);
	scanf("%d %d %d %d", &ti, &tm, &ts, &te);

	int s = si + sm + ss + se;
	int t = ti + tm + ts + te;

	if (s >= t)
		printf("%d", s);
	else
		printf("%d", t);

	return 0;
}