#include <iostream>
#include <algorithm>
using namespace std;

int arr[100005];

int binary_search(int left, int right, int num) {
	if (right < left)
		return 0;

	int mid = (left + right) / 2;
	if (arr[mid] == num)
		return 1;
	else if (arr[mid] > num)
		return binary_search(left, mid - 1, num);
	else
		return binary_search(mid + 1, right, num);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << binary_search(0, n - 1, num) << '\n';
	}
}