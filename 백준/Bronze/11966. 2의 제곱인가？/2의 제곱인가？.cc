#include <iostream>
using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	while (n % 2 == 0)
		n /= 2;

	if (n == 1)
		cout << "1";
	else
		cout << "0";
}