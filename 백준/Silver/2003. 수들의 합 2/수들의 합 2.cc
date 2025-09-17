#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, cnt = 0;
    int arr[10001];
    int sum[10003];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    int l = 0, r = 1;
    while (r <= n) {
        if (r == n && sum[r] - sum[l] < m) {
            break;
        }
        
        if (sum[r] - sum[l] < m) {
            r++;
        } else if (sum[r] - sum[l] > m) {
            l++;
        } else {
            cnt++;
            l++;
            r++;
        }
    }
    
    cout << cnt;
    
    return 0;
}