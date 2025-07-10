#include <iostream>
using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	while (n > 0) {
		cout << n << "\n";
		n--;
	}
}