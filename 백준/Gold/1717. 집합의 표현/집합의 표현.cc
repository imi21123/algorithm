#include <iostream>
using namespace std;

int n, m;
int parent[1000000];

int find(int x) {
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}
void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return;
	parent[b] = a;
}
string isUnion(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return "yes";
	else
		return "no";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
		parent[i] = i;
	while (m--) {
		int sign, a, b;
		cin >> sign >> a >> b;
		if (sign == 0)
			merge(a, b);
		else
			cout << isUnion(a, b) << "\n";
	}
}