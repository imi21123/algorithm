#include <iostream>
using namespace std;

int n, num, arr[10005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++) 
		for (int j = 0; j < arr[i]; j++)
			cout << i << "\n";
}