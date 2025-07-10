#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	sort(arr, arr + 3);

	cout << arr[1];
}