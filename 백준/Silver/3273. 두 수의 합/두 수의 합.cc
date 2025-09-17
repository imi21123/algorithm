#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x, cnt = 0;
    int arr[100001];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    
    cin >> x;

    int start = 0, end = n - 1;
    while (start < end) {
        if (arr[start] + arr[end] > x) {
            end -= 1;
        } else if (arr[start] + arr[end] < x){
            start += 1;
        } else {
            cnt++;
            start += 1;
            end -= 1;
        }
    }
    
    cout << cnt;
    
    return 0;
}