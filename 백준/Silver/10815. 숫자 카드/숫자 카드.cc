#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, cnt = 0;
    int arr_n[500001];
    int arr_m[500001];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr_n[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr_m[i];
    }

    sort(arr_n, arr_n + n);

    for (int i = 0; i < m; i++) {
        bool flag = false;
        int l = 0, r = n - 1;
        
        while (l <= r) {
            int mid = (l + r) / 2;
            
            if (arr_m[i] == arr_n[mid]) {
                cout << 1 << ' ';
                flag = true;
                break;
            } else if (arr_m[i] < arr_n[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (!flag) {
            cout << 0 << ' ';
        }
    }    
    
    return 0;
}