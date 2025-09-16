#include <iostream>
#include <algorithm>
#define MOD 1'000'000'000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long n, ans = 0;
    long arr[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    cin >> n;

    for (int i = 1; i < n; i++) {
        long tmp[10];
        copy(arr, arr + 10, tmp);

        arr[0] = tmp[1] % MOD;
        arr[1] = (tmp[0] + tmp[2]) % MOD;
        arr[2] = (tmp[1] + tmp[3]) % MOD;
        arr[3] = (tmp[2] + tmp[4]) % MOD;
        arr[4] = (tmp[3] + tmp[5]) % MOD;
        arr[5] = (tmp[4] + tmp[6]) % MOD;
        arr[6] = (tmp[5] + tmp[7]) % MOD;
        arr[7] = (tmp[6] + tmp[8]) % MOD;
        arr[8] = (tmp[7] + tmp[9]) % MOD;
        arr[9] = tmp[8] % MOD;
    }

    
    for (int i = 0; i < 10; i++) {
        ans += arr[i];
    }
    
    cout << ans % MOD << endl;
    
    return 0;
}