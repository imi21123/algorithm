#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, cnt = 0;
    int arr[10001];
    long sum[10003];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (sum[i] - sum[j] == m) {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}