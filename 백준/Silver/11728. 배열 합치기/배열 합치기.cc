#include <iostream>
#include <algorithm>
using namespace std;

int n ,m, arr[2000005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n + m; i++)
		cin >> arr[i];
	sort(arr, arr + n + m);
	
	for (int i = 0; i < n + m; i++)
		cout << arr[i] << " ";
}