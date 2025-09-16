#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int arr[1000001];
    arr[0] = 1, arr[1] = 2;

    cin >> n;

    for (int i = 2; i < n; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
        
    }
    
    cout << arr[n-1] << endl;
    
    return 0;
}