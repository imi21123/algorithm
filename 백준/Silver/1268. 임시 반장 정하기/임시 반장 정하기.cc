#include <iostream>
using namespace std;

int n, arr[1000][5], chk[1000], m = 0, ans;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < 5; k++)
				if (arr[i][k] == arr[j][k]) {
					chk[i]++;
					break;
				}

	for (int i = 0; i < n; i++) {
		if (m < chk[i]) {
			m = chk[i];
			ans = i + 1;
		}
		else if (m == chk[i])
			if (ans > i + 1)
				ans = i + 1;
	}
	cout << ans;
}