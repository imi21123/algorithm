#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

stack <int> st;
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		char c = str[i];
		if (48 <= c && c <= 57)
			st.push(c - '0');
		else {
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();

			if (c == '+')
				st.push(a + b);
			else if (c == '-')
				st.push(a - b);
			else if (c == '*')
				st.push(a * b);
			else
				st.push(a / b);
		}
	}
	cout << st.top();
}