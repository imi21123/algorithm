#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string arr[105];
    int n, cnt = 0;
    
    cin >> n;
    while (n--) {
        string w; 
        cin >> w;
        stack<char> st;

        if (w.length() % 2) {
            continue;
        }

        for (char c : w) {
            if (!st.empty() && st.top() == c) 
                st.pop();
            else st.push(c);
        }
        if (st.empty()) 
            cnt++; 
    }

    cout << cnt;
    
    return 0;
}