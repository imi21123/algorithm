#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    unordered_map<int, int> map;
    int arr[500001];

    cin >> n;
    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;
        map[key] += 1;
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        int key;
        cin >> key;
        cout << map[key] << ' ';
    }
    
    return 0;
}