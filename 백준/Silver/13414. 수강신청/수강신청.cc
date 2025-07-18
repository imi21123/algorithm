#include <iostream>
#include <map>
using namespace std;

int k, l;
map <string, int> m;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> k >> l;
	for (int i = 0; i < l; i++) {
		string id;
		cin >> id;
		m[id] = i; //중복된 아이디면 나중에 들어온 순서로 value가 덮어진다.
	}

	//map은 key를 기준으로 정렬되므로 순서대로 정렬된 map을 새로 만든다.
	map <int, string> ans;
	for (auto i : m)
		ans.insert({ i.second, i.first });

	int cnt = 0;
	for (auto i : ans) {
		cout << i.second << "\n";
		cnt++;
		//수강 가능 인원만큼 출력했으면 종료
		if (cnt == k)
			return 0;
	}
}