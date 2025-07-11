#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n;
char c[15];
vector <string> str;
vector <long long> ans;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	str.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		/*while (str.back() == "0")
			str.pop_back();*/
		reverse(str[i].begin(), str[i].end()); //원소 뒤집기
		ans.push_back(stoll(str[i])); //string to longlong, 이 때 선행되는 0 생략
	}
	sort(ans.begin(), ans.end());

	for (int i = 0; i < n; i++)
		cout << ans[i] << "\n";
}