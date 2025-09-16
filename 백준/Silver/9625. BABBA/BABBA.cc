#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a = 1, b = 0, k;
    
    cin >> k;

    while (k--) {
        int tmp = 0;
        tmp = a;
        a = b;
        b += tmp;
    }
    
    cout << a << ' ' << b << endl;
    return 0;
}