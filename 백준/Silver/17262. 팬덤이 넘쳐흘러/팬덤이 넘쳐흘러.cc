#include <iostream>
#include <algorithm>
using namespace std;

int n, s[100005], e[100005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> s[i] >> e[i];
	sort(s, s + n);
	sort(e, e + n);
	
	int start = e[0], end = s[n - 1];
	if (end - start > 0)
		cout << end - start;
	else
		cout << "0";
}