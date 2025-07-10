#include <iostream>
using namespace std;

int main() {
    int n, k, a, b, i;
    scanf("%d %d", &n, &k);
    for(i = 0; i <= n; i++) {
        scanf("%d %d", &a, &b);
        k = k + a - b;
    }
    printf("비와이");
}