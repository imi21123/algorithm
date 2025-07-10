#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, t, o, tmp = 0, num, cnt = 0;
	cin >> n;
	tmp = n;

	while (1) {
	if (tmp < 10)
		t = 0, o = tmp;
	else 
		t = tmp / 10, o = tmp % 10;

	num = t + o;
	tmp = o * 10 + num % 10;
	cnt++;
	

	if (tmp == n)
		break;
	}

	cout << cnt;
}