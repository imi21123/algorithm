#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n;
char c[55];
vector <pair <int, string>> word;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		string str = c;
		word.push_back({ str.size(), str });
	}
	sort(word.begin(), word.end());

	for (int i = 0; i < word.size(); i++) {
		if (i && word[i].second == word[i - 1].second) //맨 앞에 i가 왜 들어가는지 모르겠다
			continue; //앞 단어와 같다면(중복 제거)
		cout << word[i].second.c_str() << "\n"; //.c_str : string형을 char형으로 변환
	}
}