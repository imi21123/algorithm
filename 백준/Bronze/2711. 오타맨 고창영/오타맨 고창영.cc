#include <iostream>
#include <string>
using namespace std;

int t, idx;
string str;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	
	while (t--) {
		cin >> idx >> str;

		for (int i = 0; i < str.size(); i++) {
			if (i != idx - 1)
				cout << str[i];
		}
		cout << "\n";
	}
}