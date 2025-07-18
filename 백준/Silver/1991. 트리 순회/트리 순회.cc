#include <iostream>
#include <vector>
using namespace std;

int n;
char node, l, r;
vector <vector<char>> v(40);

void go(int s, int m) {
	if (m == 0)
		printf("%c", s + 64);
	if (v[s][0] != '.')
		go(v[s][0] - 64, m);
	if (m == 1)
		printf("%c", s + 64);
	if (v[s][1] != '.')
		go(v[s][1] - 64, m);
	if (m == 2)
		printf("%c", s + 64);
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("\n%c %c %c", &node, &l, &r);
		v[node - 64].push_back(l);
		v[node - 64].push_back(r);
	}
	for (int i = 0; i < 3; i++) {
		go(1, i);
		printf("\n");
	}
}